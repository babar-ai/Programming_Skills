


def customSortString(order, s):

    #task : we have to sort "s" string in order of "order" string
    new = ""
    mydec = {}

    for i in range(len(order)):
        
        mydec[i] = order[i]


    for i in range(len(mydec)):
        print(mydec[i])
    # for i in range(len(order)):

    #     for j in range(len(s)):

    #         if order[i] == s[j]:
    #             new[i] += s[j]







order = "cba"
s = "abcd" 
permutation = customSortString(order,s)
print(permutation)
#requird Output:  "cbad" 