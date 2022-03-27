import re
import os
pattern = r"@(?P<PC>(\w){8}): (?P<addr>(\$|\*)( )*\w*) <= (?P<data>\w*)"
flag = 1
with open(r"C:\Users\11069\Documents\program\P6\M_out.txt","r") as f1:
    with open(r"C:\Users\11069\Documents\program\P6\V_out.txt","r") as f2:
        while(flag):
            line1 = f1.readline()
            line2 = f2.readline()
            ret1 = re.search(pattern,line1)
            ret2 = re.search(pattern,line2)
            if(ret1 and ret2):
                if((ret1.group("PC") != ret2.group("PC")) | (ret1.group("addr") != ret2.group("addr")) | (ret1.group("data") != ret2.group("data")) ): 
                    print("error in:")
                    print(line1)
                    print(line2)
                    flag = 0
            else:
                if(ret1 != ret2):
                    flag = 0;
                    print("error in:")
                    print(line1)
                    print(line2)
                    os.system("exit(0)")
                break
if(flag):
    print("Correct")
