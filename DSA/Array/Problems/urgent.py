class operations:


    def __init__(self):
        self.name = [" ", "Bob", "Rebecca", "Clint", "11231", "32i73"]


    def data(self, names):
        self.names = list(
        filter(lambda el: el[0].isupper() and el[1:].islower(), names))
        return self.name


    def display(self, result):
        length = len(''.join(self.names))
        n = sorted([int(x) for x in result if x.isdigit()])
        for i in ((filter(lambda x: x > length, n))):
            return i


o = operations()

names = ['Alice', 'mark Thomas', 'rebecca',
         'Bob1231', '68732', 'Clint', "11231", "32173"]
result = o.data(names)
dis = o.display(result)

print(dis)
