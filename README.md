# Horspool-Algorithms

1-Kruskal Algoritması
Kruskal algoritması minimum ağaç probleminin çözümü için kullanılır. Buradaki amacımız en kısa yoldan döngü oluşturmayacak şekilde düğüm noktalarına ulaşabilmemizdir.
1.	Kenar uzunlukları küçükten büyüğe doğru olacak şekilde alt alta sıralanır.
2.	En Küçük kenardan seçilir, graf içinde döngü oluşturup oluşturmadığı kontrol edilir. Eğer döngü oluşmuyorsa, kenar dahil edilir. Fakat bir döngü oluşuyorsa o kenar kullanılmaz.
3.	(N-1) kadar kenar sayısı elde edilene kadar 2. adım tekrarlanır.

       Bu algoritmayı çalıştıramadığım için atamadım kusura bakmayın.



2-Horspool Algoritması
Horspool algoritması bir arama algoritmasıdır.Bu algoritma verilen metnin içindeki kelime veya desenleri bulmayı sağlar.Diğer metin algoritmalarından en büyük farkı txt üzerinden işlem yapmamızdır.
En iyi durumda çalışma zamanı 0(m) dir. Genellikle n olmasına alışığız fakat burada girdi yerine metnin içinden kelime aradığımız için m kullanılır.
En kötu durumda çalışma zamanı 0(mn) olur. Burada n  metnin uzunluğu, m ise aradığımız kelimenin uzunluğudur.
Ortalama durumda ise 0(n/m) zaman karmaşıklığına sahiptir. Bu durumda eğer aranan kelime sık geçiyorsa performansı daha iyi iken kelime sayısı az ise performansı kötü olabilir.


