def split(word): 
    return [char for char in word]

def xor( x,  y):
    if x == y :
        return 0;
    else:
        return 1;

def main():
    gray = input("Enter the Gray code:-")
    grayl=[]
    grayl= split(gray)
    binal=[]
    binal.append(grayl[0])
    b_p = grayl[0]
    print(grayl)
    for i in range(1, len(grayl)):
       # print(val, end=" ")
        b_n = xor(int(grayl[i]) , int(b_p))
        #print( grayl[i]  ,  val)
        binal.append(b_n)
        b_p = b_n
    #print(binal)
    for i in range(0, len(binal)):
        print(binal[i] , end="")

main()

def test():
    print(xor(1,1))

#test()
