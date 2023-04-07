#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int Horspool(string kelimedizisi, string metindizisi) {
    int a = kelimedizisi.length();
    int b = metindizisi.length();
    int sayac = 0;
    int tablo[256];

    for (int i = 0; i<256; i++) {
        tablo[i] = a;
    }
    for (int j = 0; j < a - 1; j++) {
        tablo[kelimedizisi[j]]=a-1-j; // kelimenin her karakteri için, bulundukları konuma göre bir değer hesapladım ve tablo içerisinde sakladım.
    }

    int i = a - 1, j;
    while (i < b) {
        j = 0; //sıfırladım çünkü j nin önceki değeri yeni karakterin kontrolünde kullanılacak ve hatalı sonuçlar elde edilecektir.
        while (j < a && metindizisi[i-j]==kelimedizisi[a-1-j]) {
            j++;
        }
        if (j == a)
            sayac++;

        i+=tablo[metindizisi[i]];//Bu satırda horspool algoritmasının skip mekanizması var.
                           // Bu mekanizma, eğer belirlenemeyen bir karakter varsa, metindeki bir sonraki olası eşleşme pozisyonunu belirlemek için kullanýlýr.
    }
    return sayac;
}

int main() {
    string dosyaAdi = "alice_in_wonderland.txt";//txt dosyasını aynı klasörde kullandım ve direkt dosyayı çağırdım .
    string dizi[] = {"upon", "sigh","Dormouse","jury-box","swim"};
    FILE* dosya;
    dosya = fopen(dosyaAdi.c_str(), "r");
    if (!dosya) {// dosyaya erişerek öncelikle açılıp açılmadığını kontrol ettim.Erişim sıkıntısı olursa programı sonlandıracak.
        printf("Dosya acilamadi.");
        return 0;
    }
    char satir[100];
    string metin;

    while (fgets(satir, 100, dosya)) {
        metin += satir;//bu kod bloğu verilen dosyayı okur ve her satırı okuduktan sonra bir metin dizesine ekler.
    }
    fclose(dosya);


    int sayac1 = Horspool(dizi[0], metin);//hata aldığım için her bir kelimeyi tek tek yazarak sonuca varabildim.
    int sayac2 = Horspool(dizi[1], metin);
    int sayac3 = Horspool(dizi[2], metin);
    int sayac4 = Horspool(dizi[3], metin);
    int sayac5 = Horspool(dizi[4], metin);

    if (sayac1 == 0)
        cout << dizi[0] << " kelimesi  bulunamadi." << endl;
    else
        cout << dizi[0] << " kelimesi " << sayac1 << " kez gecmektedir." << endl;

    if (sayac2 == 0)
        cout << dizi[1] << " kelimesi  bulunamadi." << endl;
    else
        cout << dizi[1] << " kelimesi " << sayac2 << " kez gecmektedir." << endl;

    if (sayac3 == 0)
        cout << dizi[2] << " kelimesi bulunamadi." << endl;
    else
        cout << dizi[2] << " kelimesi " << sayac3 << " kez gecmektedir." << endl;

    if (sayac4 == 0)
        cout << dizi[3] << " kelimesi  bulunamadi." << endl;
    else
        cout << dizi[3] << " kelimesi " << sayac4 << " kez gecmektedir." << endl;

    if (sayac5 == 0)
        cout << dizi[4] << " kelimesi  bulunamadi." << endl;
    else
        cout << dizi[4] << " kelimesi " << sayac5 << " kez gecmektedir." << endl;


    return 0;
}
