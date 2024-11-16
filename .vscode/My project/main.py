 
# # # l=[]


# # # for i in range(int(input())):
# # #     name = input()
# # #     score = float(input())
# # #     l.append([name,score])
        
# # # unique=sorted(set(score for name,score in l))
    
# # # second_lowest_grade=unique[1]
# # # second_lowest_students = [name for name, score in l if score==second_lowest_grade]
    
    
# # # second_lowest_students.sort()
# # # print("\n".join(second_lowest_students))

# # L=['e']
# # N = int(input())
# # print(L.index("e"))
# # # def insert(L[i],a):
# # #     L[i]=a
# # # def remove(e):
# # #     L.pop(for e in L:True return L.index(e))
    
        
        
# if __name__ == '__main__':
#     # Initialize an empty list
#     lst = []

#     # Number of commands
#     n = int(input("Enter the number of commands: "))

#     # Process each command
#     for _ in range(n):
#         # Read command and arguments
#         command = input("Enter command: ").split()
#         cmd = command[0]  # Command name
#         args = command[1:]  # Arguments, if any
#         print(type(args),"\n",args)
#         # # Perform the corresponding operation
#         # if cmd == "insert":
#         #     lst.insert(int(args[0]), int(args[1]))
#         # elif cmd == "print":
#         #     print(lst)
#         # elif cmd == "remove":
#         #     lst.remove(int(args[0]))
#         # elif cmd == "append":
#         #     lst.append(int(args[0]))
#         # elif cmd == "sort":
#         #     lst.sort()
#         # elif cmd == "pop":
#         #     lst.pop()
#         # elif cmd == "reverse":
#         #     lst.reverse()


if __name__ == '__main__':
    L=[]
    N = int(input())
    for i in range(N):
        command =input().split()
        cmd=command[0]
        arg=command[1:]
        if cmd == "insert":
            L.insert(int(arg[0]),int(arg[1]))
        elif cmd == "print":
            print(L)
        elif cmd == "remove":
            L.remove(int(arg[0]))
        elif cmd== "append":
            L.append(int((arg[0])))
        elif cmd == "sort":
            L.sort()
        elif cmd== "pop":
            L.pop()
        elif cmd== "reverse":
            L.reverse()
    
        
        