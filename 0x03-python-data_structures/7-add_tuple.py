def add_tuple(tuple_a=(), tuple_b=()):
    temp = []
    for i in range(len(tuple_a)):
        if i >= len(tuple_b):
            temp.append(tuple_a[i] + 0)
        else:
            temp.append(tuple_a[i] + tuple_b[i])
    return (tuple(temp))
