void *realloc(void *p, size_t size)
{
    size_t s;
    t_block b, _new;
    if (!p)
        return malloc(size);
    if (valid_addr(p))
    {
        s = align4(size);
        b = get_block(p);
        if (b->size >= s) //如果size变小了，考虑split
        {
            if (b->size - s >= (BLOCK_SIZE + 4))
                split_block(b, s);
        }
        else //如果当前block的数据区不能满足size
        {
            //如果后继block是free的，并且合并后大小满足size，考虑合并
            if (b->next && b->next->free && (b->size + BLOCK_SIZE + b->next->size) >= s)
            {
                fusion(b); //合并后满足size，再看能不能split
                if (b->size - s >= (BLOCK_SIZE + 4))
                    split_block(b, s);
            }
            else //以上都不满足，则malloc新区域
            {
                newp = malloc(s);
                if (!newp)
                    return NULL; //内存复制
                _new = get_block(newp);
                copy_block(b, new);
                free(p);
                return newp;
            }
        }
        return p;
    }
    return NULL;
}