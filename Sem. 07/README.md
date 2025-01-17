
**Задача 1:** Даден е едносвързан **цикличен** списък, чиито елементи са стрингове.  
Да се реализира функция *unite(Node\* list)*, която получава като параметър указател към елемент на цикличния списък от стрингове и ***обединява всички двойки последователни елементи на списъка, за които последния символ на единия елемент съвпада с първия символ на непосредствено следващия му елемент***, в общ елемент, чийто низ е съставен от слепването на стринговете на двата елемента, разделени с тире.  
Функцията да изкарва списъка на стандартния изход, започвайки от лексикографски най-малкия низ.  
*Вход:*  
```c++
street -> taxi -> ink -> dog -> smile -> eat -> tall -> pass
```
*Изход:*  
```c++
dog

smile -> eat -> tall

pass -> street -> taxi -> ink
```

***Задача 2:*** Даден е двусвързан списък с четен брой елементи. Всеки елемент представлява едносвързан списък от числа в интервала [0,9]. 
Всеки едносвързан списък сам по себе си интерпретира число, чиито цифри са елементите на списъка в същия ред. ( 3->4->5 е числото 345).
Напишете функция, която получава като параметър двусвързан списък от този вид и проверява **дали първите n/2 (където n е дължината на списъка)
числа образуват растяща редица и вторите n/2 числа - намаляваща.**

***Задача 3:*** Даден е едносвъран списък, чийто елементи са числа. Напишете функция **rearange**, която преподрежда елементите, така че първо да бъдат четните числа, после нечетните.
Относителната наредба между числата трябва да се запази. Решението ви трябва да работи за O(n) по време.

**Пример:** Списъкът да е: 3->5->2->9->4

**Изход:** 2->4->3->5->9

**Задача 4:** Даден е списък **l** с елементи опашки от естествени числа.  
Да се дефинира функция, която връща *дали последователната конкатенация на всички опашки образува сортирана редица.*  
**Да се реши с константна памет и да не се променят входните данни!**  

*Вход:* &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Изход:*
```c++
1 -> 2 -> 3                   yes 
|                             1 -> 2 -> 3 -> 6 -> 9 -> 10 -> 
v                             11 -> 22 -> 33
6 -> 9 -> 10
|
v
11 -> 22 -> 33
|
v
empty
```
*Вход:* &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Изход:*
```c++
1                             no
|
v
6 -> 9 -> 10
|
v
9 -> 22
```
*Вход:* &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Изход:*
```c++
1 -> 2 -> 3                   no
|
v
4 -> 5 -> 4
```

**Задача 5:** Даден е списък **l** с елементи опашки от естествени числа.  
- Ако **n** последователни опашки са с равна големина, то те са "подобни" и *трябва да се слеят*.  
- Ако **две** последователни опашки не са с равен брой елементи, *то той трябва да се изравни с разлика до единица*.  

*Вход:* &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Изход:*
```c++
2 -> 4 -> 6                   2 -> 4 -> 6 -> 8 -> 0 -> 7
|                             |
v                             v
8 -> 0 -> 7                   7 -> 9 -> 23 -> 22
|                             |
v                             v
5 -> 7 -> 9 -> 23 -> 22       9 -> 1 -> 5
|                             |
v                             v
9 -> 1                        2 -> 1 -> 33 -> 44
|
V
2
|
v
1
|
v
33 -> 44
```

**Задача 6 (Flatten):** Даден е указател към началото на двойно свързан списък с *четен брой елементи*, които имат и още един указател - **child**. Този указател сочи към друг отделен двойно свързан списък.  
В първата половина на списъка, child указателите на елементите са празни. Но във втората се е получила аномалия на списъка, и някои елементи имат child указатели, които не са празни.  
По този начин втората половина на списъка се е превърнала в списък на няколко нива.  
*Нашата задача е да превърнем списъка в списък на едно ниво*.  

![alt_text](https://i.ibb.co/7rbwp4r/Multilevel-list.png)

![alt_text](https://i.ibb.co/F3994Hh/One-level-list.png)
