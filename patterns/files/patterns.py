
print("Pattern - 1")
for _ in range(5):
    for _ in range(5):
        print("*",end="")
    print("")


print("Pattern - 2")
for i in range(5):
    for _ in range(i+1):
        print("*",end="")
    print("")

print("Pattern - 3")
for i in range(5):
    for j in range(i+1):
        print(j+1,end="")
    print("")

print("Pattern - 4")
for i in range(5):
    for j in range(i+1):
        print(i+1,end="")
    print("")

print("Pattern - 5")
for i in range(5,0,-1):
    for j in range(i):
        print("*",end="")
    print("")

print("Pattern - 6")
for i in range(5,0,-1):
    for j in range(i):
        print(j+1,end="")
    print("")

print("Pattern - 7")
for i in range(5):
    for _ in range(5-i-1):
        print(" ",end="")
    for j in range(2*i+1):
        print("*",end="")
    print("")

print("Pattern - 8")
for i in range(5,0,-1):
    for _ in range(5-i):
        print(" ",end="")
    for j in range(2*i-1):
        print("*",end="")
    print("")

print("Pattern - 9")
for i in range(10):
    if i < 5:
        for _ in range(5-i-1):
            print(" ",end="")
        for _ in range(2*i+1):
            print("*",end="")
    else:
        for _ in range(i-5):
            print(" ",end="")
        for _ in range(2*(10-i)-1):
            print("*",end="")
    print("")

print("Pattern - 10")
for i in range(10):
    if i < 5:
        for _ in range(i+1):
            print("*",end="")
    else:
        for _ in range(10-i,0,-1):
            print("*",end="")
    print("")

print("Pattern - 11")
for i in range(5):
    for j in range(i+1,0,-1):
        print(j%2,end="")
    print("")

print("Pattern - 12")
for i in range(4):
    for j in range(i+1):
        print(j+1,end="")
    for _ in range(2*(4-i-1)):
        print(" ",end="")
    for k in range(i+1,0,-1):
        print(k,end="")
    print("")

print("Pattern - 13")
var = 1
for i in range(5):
    for j in range(i+1):
        print(var,end=" ")
        var+=1
    print("")

print("Pattern - 14")
for i in range(5):
    for j in range(i+1):
        print(chr(65+j),end="")
    print("")

print("Pattern - 15")
for i in range(5,0,-1):
    for j in range(i):
        print(chr(65+j),end="")
    print("")
    
print("Pattern - 16")
for i in range(5):
    for j in range(i+1):
        print(chr(65+i),end="")
    print("")

print("Pattern - 17")
for i in range(4):
    for _ in range(4-i-1):
        print(" ",end="")
    for j in range(2*i+1):
        if j < i :
            print(chr(65+j),end="")
        else:
            print(chr(65+2*i-j),end="")
    print("")

print("Pattern - 18")
for i in range(5,0,-1):
    for j in range(i-1,5):
        print(chr(65+j),end="")
    print("")
print("Pattern - 19")
for i in range(10):
    if i < 5:
        for _ in range(i,5):
            print("*",end="")
        for _ in range(2*i):
            print(" ",end="")
        for _ in range(i,5):
            print("*",end="")
    else:
        for _ in range(i-5+1):
            print("*",end="")
        for _ in range(2*(10-i-1)):
            print(" ",end="")
        for _ in range(i-5+1):
            print("*",end="")
    print("")

print("Pattern - 20")
for i in range(9):
    if i < 5:
        for _ in range(i+1):
            print("*",end="")
        for _ in range(2*(5-i-1)):
            print(" ",end="")
        for _ in range(i+1):
            print("*",end="")
    else: 
        for _ in range(9-i):
            print("*",end="")
        for _ in range(2*(i-5+1)):
            print(" ",end="")
        for _ in range(9-i):
            print("*",end="")
    print("")
            
print("Pattern - 21")
for i in range(4):
    if i % 3 == 0:
        print("*"*4,end="")
    else:
        for j in range(4):
            if j % 3 == 0:
                print("*",end="")
            else:
                print(" ",end="")
    print("")
print("Pattern - 22")
for i in range(7):
    for j in range(7):
        if i % 6 ==0  or j % 6 ==0:
            print("4 ",end="")
        elif i%6==1 or j%6 ==1 or i%6==5 or j%6 ==5:
            print("3 ",end="")
        elif i%6==2 or j%6 ==2 or i%6 == 4 or j%6 == 4:
            print("2 ",end="")
        elif i%6==3 or j%6 ==3:
            print("1 ",end="")
    print("")