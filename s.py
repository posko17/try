from socket import *
from socket import *
import sys
from time import ctime

HOST =''
PORT =10000
BUFSIZE=1024
ADDR=(HOST,PORT)

serversocket = socket(AF_INET,SOCK_STREAM)
serversocket.bind(ADDR)
print('bind')
serversocket.listen(100)
print('listen')
clientsocket,addr_info=serversocket.accept()
print('accept')
clientsocket.close()
serversocket.close()
print('close')