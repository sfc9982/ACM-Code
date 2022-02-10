from cyaron import *

for i in range(1, 3):
    test_data = IO(file_prefix="seq", data_id=i)
    x = 100
    test_data.input_writeln(x)
    for j in range(1, x + 1):
        a = randint(-10, 11)
        test_data.input_write(a)

    test_data.output_gen("D:\\Desktop\\cyaron-master\\P1719_std.exe")
