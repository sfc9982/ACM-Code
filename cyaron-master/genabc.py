from cyaron import *

for i in range(1, 3):
    test_data = IO(file_prefix="formula", data_id=i)
    a = randint(1, 100001)
    a /= 100
    b = randint(1, 100001)
    b /= 100
    test_data.input_writeln(a, b)
    test_data.output_gen("D:\\Desktop\\NEFU\\stdbdgls.exe")
for i in range(3, 11):
    test_data = IO(file_prefix="formula", data_id=i)
    a = randint(1, 100001)
    a /= 100
    b = randint(1, 100001)
    b /= 100
    test_data.input_writeln(str(a) + 'i', b)
    test_data.output_gen("D:\\Desktop\\NEFU\\stdbdgls.exe")
