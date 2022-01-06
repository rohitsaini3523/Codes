from os import name
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
ch=0
def checkfile(f):
    line_count =0
    for line in f:
        if line !="\n":
            line_count+=1
    return line_count
    
while(ch!=6):
    print("\n1.Insert Data\n2.Delete Data\n3.Display Data\n4.Search Data\n5.Graphical Data\n6.Exit")
    ch=int(input("Enter a choice : "))
    if ch==1: #Append
        f=open("stud_data.txt",'a+')
        f.seek(0)
        if(checkfile(f)==1):
            sno = checkfile(f)
        else:
            f.seek(0)
            sno = int(f.readlines()[-1].split()[0])
        n=int(input("Enter number of records you want to enter : "))
        for i in range(n):
            nm=input("Enter a name : ").capitalize()
            rn=input("Enter a roll no : ")
            p=input("Enter Panel : ").lower()
            b=input("Enter Batch : ")
            m=input("Enter Marks : ")
            sno+=1
            f.write(str(sno)+"\t"+rn+"\t"+nm+"\t"+p+"\t"+b+"\t"+m+"\n")
            f.flush()
        f.close()

    elif ch==2: #Delete
        f=open("stud_data.txt",'r')
        lines=[]
        for i in f.readlines():
            lines.append(i.split('\t'))
        f.close()
        f=open("stud_data.txt",'w')
        rn=input("Enter RollNo to delete : ")
        for i in lines:
            if i[1]!=rn:
                f.writelines("\t".join(i))
        f.close()
        

    elif ch==3: #Display
        df=pd.read_csv('stud_data.txt',delimiter='\t')
        f=open("stud_data.txt",'a+')
        f.seek(0)   
        if(checkfile(f)==1):
            print("Empty File!")
        else:
            m=np.array(df["Marks"])
            print(df)
            print("Average Marks :",sum(m)/len(m))
                
    elif ch==4: #Search
        s=int(input("1.By Roll No\n2.By Name\nEnter your choice : "))
        df=pd.read_csv('stud_data.txt',delimiter='\t')
        if s==1:
            rn=int(input("Enter the RollNo : "))
            print(df[df["RollNo"]==rn])
        elif s==2:
            n=input("Enter Name : ").capitalize()
            print(df[df['Name']==n])

    elif ch==5: #Graph
        df=pd.read_csv('stud_data.txt',delimiter='\t')
        f=open("stud_data.txt",'a+')
        f.seek(0)   
        if(checkfile(f)==0):
            print("Empty File!")
        else:
            m=np.array(df['Marks'])
            st=df['Name']
            index=np.arange(len(st))
            plt.plot(m,color='red') 
            plt.title('Marks Line-Graph')
            plt.xlabel('Students')
            plt.ylabel('Marks')
            plt.xticks(index,st,rotation=45)
            plt.yticks(np.arange(0,101,10))
            plt.show()

    elif ch ==6:
        break
    else:
        print("Invalid Choice")
            
print("Thank You")