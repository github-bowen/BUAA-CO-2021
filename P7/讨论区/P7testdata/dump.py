import os
import re

os.chdir(r"C:\Users\11069\Documents\program\P7testdata")

pattern = r"^t[\w]*\.asm"

for root,dirs,files in os.walk(r"C:\Users\11069\Documents\program\P7testdata"): ##扫描根目录下所有异常种类数据包文件夹
    ##进入异常种类文件夹
    for exceptiondirt in dirs:
        for rootinside,dirsinside,filesinside in os.walk(os.path.join(root,exceptiondirt)): ##扫描异常种类数据内所有测试点文件夹
            ##进入数据文件夹
            for datadirt in dirsinside:
                for rootdata,dirdata,filesdata in os.walk(os.path.join(rootinside,datadirt)):  ## 扫描文件夹里面所有file
                    for fileName in filesdata :
                            if re.match(pattern, fileName):
                                targetfile = os.path.join(rootdata,fileName)
                                tmplist = [rootdata,"code.txt"]
                                codefile = ("\\").join(tmplist)
                                print(codefile)
                                os.system(r"java -jar F:\Mars_perfect.jar nc a db mc  CompactDataAtZero dump 0x00003000-0x0000417c HexText C:\Users\11069\Documents\program\P7testdata\text.txt %s"%(targetfile))
                                ## dump ktext context
                                os.system(r"java -jar F:\Mars_perfect.jar nc a db mc  CompactDataAtZero dump 0x00004180-0x00004f00 HexText C:\Users\11069\Documents\program\P7testdata\ktext.txt %s"%(targetfile))
                                with open(r"C:\Users\11069\Documents\program\P7testdata\text.txt","r") as textfile:
                                    with open(r"C:\Users\11069\Documents\program\P7testdata\ktext.txt","r") as ktextfile:
                                        with open(codefile,"w") as codefile:
                                            for i in range(0x3000,0x4180,4) :
                                                ret1 =textfile.readline()
                                                if(ret1):
                                                    codefile.write(ret1)
                                                else:
                                                    codefile.write("00000000\n")
                                            codefile.write(ktextfile.read())



