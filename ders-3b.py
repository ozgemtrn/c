# LİSTE METOTLARI

# sayılar=[-5,2,23,94,5,6,-20,19,20,94,5,19,31,5,54]

# harfler=['a','b','c','d','g','s','m','h','r']

# en_kucuk=max(sayılar)
# print(en_kucuk)

# ilk_harf=max(harfler)
# print(ilk_harf)

# print(len(harfler))

# sayılar.append(92)  # sona veri ekleme
# sayılar.insert(5,4) # istenilen konuma veri ekleme
# sayılar.pop()       # son indexi siler
# sayılar.remove(19)  #istenilen elemanı siler

# sayılar.sort()      # küçükten büyüğe
# sayılar.reverse()   # listeyi tersine çevirir

# print(sayılar.count(23))

isimler=['burak','ahmet','mehmet','ayşe','fatma']

# isimler.append('fadime')
# isimler.insert(4,'kezban')

# isimler.pop(0)

# print(isimler)
# indeks=isimler.index('mehmet')


# print(indeks)

# durum='mustafa' in isimler
# print(durum)


# dogum_tarihi=[]
# x=0
# while x<5:
#     a=int(input("doğum tarihi: "))
#     dogum_tarihi.append(a)
#     x+=1

# print(dogum_tarihi)


#FONKSİYONLAR

# def yas_hesaplama():
#     dogum_tarihi=int(input("doğum tarihinizi yazınız: "))
#     yas=2022-dogum_tarihi
#     print(f"yaşınız {yas}")


# yas_hesaplama()

# def yas_hesaplama(yıl):
#     yas=2022-yıl
#     return yas

# burak_yas=yas_hesaplama(1992)

# mehmet_yas=yas_hesaplama(2002)

# ahmet_yas=yas_hesaplama(2004)


# def giris_onay(isim,parola):
#     if isim=='burak' and parola=='burak123':
#         print("hoşgeldiniz..")
#     else:
#         print('yanlış kullanıcı adı veya şifre')

# kullacı_adı=input('kullanıcı adınızı giriniz: ')
# sifre=input('şifrenizi giriniz: ')
# giris_onay(kullacı_adı,sifre)

def asal_sayılar(a,b):
    
    for i in range(a,b+1):              # birinci sayıdan başlar ikinci sayıyı dahil ederek liste oluşturur
        if a>1:
            for x in range(2,i):        # i nin son duruma kadar 2 den başlayıp bir liste oluşturur
                if i%x==0:
                    continue
            else:
                print(i)
    
a=int(input("1. sayıyı giriniz: "))
b=int(input("2. sayıyı giriniz: "))
asal_sayılar(a,b)


'''

asal sayı kendisine ve 1 e bölünebilen sayılara 

4 
    2,3
5 
    2,3,4  +
6
    2,3,4,5
7
8
9
10
11
12
13
14
15 



'''
