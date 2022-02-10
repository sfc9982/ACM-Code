from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="list", data_id=i)
    s = randint(1, 101)
    test_data.input_writeln(s)
    for j in range(1, s + 1):
        str = String.random(
            (10, 40), charset="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")
        t = randint(1, 3)
        for j in range(1, t):
            test_data.input_writeln(str)
    test_data.output_gen("D:\\Desktop\\cyaron-master\\list_std.exe")
