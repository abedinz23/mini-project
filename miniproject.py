import cprofile,pstats,io
from datetime import datetime
import os
import shutil
def password():
      default="zainul"
      user=input("enter the password")
      if default==user:
            print("you have entered correct password")
            return 1;
      else:
            print("you have entered wrong password")
            return 0;
      
      
def rename():
      s=input("enter the file name : ")
      if os.path.exists(s):
            w=input("enter the new name: ")
            os.rename(s,w)
      else:
            print("the file does not exists")

def copy():
      s=input("enter the path of the orignal file ")
      d=input("enter the path of the file you want to copy ")
      shutil.copyfile(s,d)
def exit():
     quit()
def help():
     print("you can enter the follwing commands:")
     print("write >>> to write a file")
     print("write  >>> To write to a file")
     print("read   >>> To read from a file")
     print("append >>> To append a file")
     print("remove >>> To remove a file")
     print("rename >>> To rename a file")
     print("clr    >>> To clear the screen")
     print("dt     >>> To show date and time")
     print("stscr  >>> To show start screen")
     
     print("exit   >>> To exit")
def dt():
     today=datetime.today()
     print("today's date and time:",today)
     
def read():
     print("use .txt or any other extention to read Ex: hello.txt")
     s=input("enter file namt to read: ")
     f=open(s,"r")
     print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")
     print(f.read());
def write():
     print("Use .txt or any other extension to write\nEx: hello.txt\n\n")
     s=input("enter file name to write : ")
     if os.path.exists(s):
          f=open(s,"a")
          w=input("enter the content you want to write ")
          f.write(w)
          f.close()
          print("\n\n successfully written\n")
     else:
          print("the file does not exists \n")
def clear():
     os.system('cls')

def stscr():
     print("zainul terminal\n")
     print("type \"help\" for more things! \n\n")
def remove():
     s=input("enter a file name to remove: ")
     if os.path.exists(s):
          os.remove(s)
     else:
          print("the file does not exists")
def cdir():
     path=input("enter the path: ")
     
     l=os.listdir(path)
     print(l)
def calculator():
     a=float(input("enter first no: "))
     b=float(input("enter second no: "))
     s=input("enter the operation you want to perform +,-,/,*: ")
     if s=="+":
             x=float(a+b)
             print(x)
     elif s=="-":
          x=float(a-b)
          print(x)
     elif s=="*":
          x=float(a*b)
          print(x)
     elif s=="/":
          x=a/b
          print(x)
     else:
          print("you have entered wrong values ")
print("zainul terminal \n")
dt()
print("welcome to zainu terminal \n")
z=password()
if z==1:
      print("type \"help\" for more things! \n")
      i=1
      while i:
            print(">>>");
            s=input()
            if s=="read":
                   read()
            elif s=="write":
                   write()
            elif s=="help":
                   help()
            elif s=="dt":
                   dt()
            elif s=="cdir":
                   cdir()
            elif s=="copy":
                   copy()
            elif s=="exit":
                   exit()
            elif s=="calc":
                   calculator()
            elif s=="stscr":
                   stscr()
            elif s=="rename":
                   rename()
     
             
     

