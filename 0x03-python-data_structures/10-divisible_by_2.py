def divisible_by_2(my_list=[]):
    is_div = []
    for i in my_list:
        is_div.append((i % 2) == 0)
    return is_div
