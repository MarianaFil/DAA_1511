# -*- coding: utf-8 -*-
"""cifrado cesar, fuerza bruta.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1WF9sIuMVf8bhI3R-yLHHdzq107PvGZxX
"""

texto=input("Mensaje: ")

caracts='ABCDEFGHIJKLMNÑOPQRSTUVWXYZabcdefghijklmnñopqrstuwxyz0123456789'

for key in range(len(caracts)):
    traducido=''

    for elem in texto:
        if elem in caracts:
            elemIndex=caracts.find(elem)
            tradIndex=elemIndex-key

            if tradIndex<0:
                tradIndex=tradIndex+len(caracts)
            traducido=traducido+caracts[tradIndex]
        else:
            traducido=traducido+elem

        if len(traducido)==len(texto):
            print('key #%s: %s' % (key, traducido))