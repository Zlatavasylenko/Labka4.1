# Labka4.1
Arrays of arrays and dynamic arrays(version 1)
Версія 1
Написати програму, яка заповнює матрицю цілими або дійсними (залежно від варіанту) псевдовипадковими числами, обробляє її та виводить результати обробки на екран.
Вимоги до виконання
1. Реалізувати програму за допомогою проєкту, який включає три файли.
– h-файл: прототипи функцій роботи з масивами масивів та інші оголошення імен,  
– однойменний з ним cpp-файл: самі ці функції,
– головний файл – головна функція та допоміжні до неї, не зв’язані з обробкою матриць.
2. Означити тип структур для зображення матриць, розміри яких у межах N на N, де N = 20. Матриця зображується структурою: масив масивів (двовимірний масив), кількість рядків, кількість стовпців.
3. У програмі мають бути функції для підзадач:
– вивести повідомлення, яке містить групу, прізвище та ім'я студента, назву роботи та опис завдання у варіанті;
– заповнити матрицю псевдовипадковими числами;  
– обробити матрицю;
– вивести результати обробки матриці на екран. 
4. Головна функція викликає функції виведення повідомлення про назву роботи та її виконавця, заповнення матриці, обробки матриці, виведення результатів обробки.
5. У функціях заповнення, обробки та виведення матрицю представлено параметром, тип якого означено в програмі.
6. Під час заповнення матриці має бути гарантовано, що розміри матриці в межах від 3 до N.
7. Якщо в результаті обробки виводиться матриця, то перший рядок на екрані містить розміри матриці – два цілих числа n і m (у межах від 3 до N), наступні n рядків містять по m цілих чисел. Матриця виводиться на екран з вирівнюванням стовпців за правим краєм.
 
Пояснення щодо варіантів обробки матриць
В усіх варіантах матриці містять цілі числа, окрім тих, де явно вказано дійсні.
В усіх варіантах матриці прямокутні (кількості рядків і стовпчиків можуть відрізнятися), окрім тих, де явно зазначено квадратні.
Квадратних матриць стосуються терміни: головна діагональ («згори зліва – вниз вправо»), побічна діагональ («згори справа – вниз вліво»), сектор, кут, центральний ромб, чверть.
173. Знайти перший (з найменшим номером рядка, а за рівності номерів рядків з найменшим номером стовпчика) з елементів, що мають найбільше за модулем значення у лівому секторі квадратної матриці (включно з границями). Вилучити з матриці рядок і стовпчик, яким він належить.