def delete_at(my_list=[], idx=0):
    if idx >= len(my_list) or idx < 0:
        return my_list
    else:
        for i in range(len(my_list)):
            if i == idx:
                del(my_list[i])
                break
        return my_list
