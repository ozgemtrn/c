# 1-)
print("*"*10+"SORU-1"+"*"*10+"\n")
tamBolen_List=[]

def tam_bolen(sayi):
    for i in range(1,sayi):
        if sayi%i!=0:
            tamBolen_List.append(i)
sayi=int(input("Lütfen bir sayı giriniz: "))
tam_bolen(sayi)
print(tamBolen_List)

print("\n")
# 2-)
print("*"*10+"SORU-2"+"*"*10+"\n")
import math
# alan=pi*r*r
def yari_cap(r):
    return math.pi*r*r
print(yari_cap(int(input("lütfen yarı çap giriniz: "))))

# bu soruyu math kütüphanesi kullanmadan da pi değerini elle girebilirdik (pi=3.14)

print("\n")
# 3-)
print("*"*10+"SORU-3"+"*"*10+"\n")

markalar=[]
for i in range(0,3):
    a=input("lütfen araba makrasını giriniz: ")
    markalar.append(a)
print(markalar)

print("\n")
# 4-)
print("*"*10+"SORU-1"+"*"*10+"\n")

liste=[]
sayi=int(input(" sayı giriniz: "))
bolen=2
def asal_carpan(a,b):
    for i in range(1,sayi):
        if(a%b==0):
            liste.append(b)             # burada aynı eleman birden fazla tekrarlanıyorsa o elemanı bulup sildirebilirsiniz (count)
            a/=b
        else:
            b+=1
asal_carpan(sayi,bolen)
print(liste)
 
print("\n")
# 5-)
print("*"*10+"SORU-1"+"*"*10+"\n")

import random
x=random.randint(1,100)

hak=int(input("hak sayısını giriniz: "))
sayac=0
puan=float(100/hak)
while hak>0:
    hak-=1
    y=int(input(f'{sayac+1}.tahmininizi yapınız: '))
    if x==y:
        print('tebrikler...')
        print(f'{sayac+1}. defada bildiniz...')
        print(f"puanınız: {100-(puan*(sayac))}")
        break
    elif x<y:
        print('sayı daha aşağıda...')
    elif x>y:
        print('sayı daha yukarıda...')
    else:
        print('yanlış değer girdiniz')
    if hak==0:
        print('hakkınız bitti..')
        print(f'tutulan sayı: {x}')
    sayac+=1
print("\n")
print("*"*10+"SORU-1"+"*"*10+"\n")