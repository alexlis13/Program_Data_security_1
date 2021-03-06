# Program_Data_security_1
IDE : Visual Studio 2017 Community
## Задание
Реализовать программу на языке C\C++, которая должна включать
следующую последовательность действий:
1. Запрос какой-либо информации от пользователя (логин, номер телефона, номер какого-либо документа, ключ любого вида и т.д.)
2. Произведение манипуляций по разработанному алгоритму с введённой пользователем информацией для генерации ответа на ключевой вопрос.
3. Запрос ключа от пользователя и сравнение его со сгенерированным ключом на этапе 2.
4. Выдача результата по принципу: сгенерированный и алгоритмом и введённый пользователем ключи совпадают – TRUE-> Поздравление или доступ к какой либо информации; Не совпадают – ошибка.

При реализации программы должны быть соблюдены условия:
1. Внутри программы должен быть какой-либо алгоритм преобразования данных для генерации ключевой информации. Например, сложение по модулю кодов букв из таблицы ASCII, Подсчёт количества букв в логине пользователя и умножение его на текущий год, запросы системного времени или к каким-либо заранее определённым файлам.
2. Должны быть реализованы меры защиты от отладки: специальные функции языка, искусственное усложнение кода, директивы препроцессора, условия сборки компилятора, упаковщики и т. д.

Результатом выполнения задания должна быть разработанная программа в виде исходных кодов, make/cmake файла сборки или инструкции по сборке в случае применения дополнительных средств или специальных скриптов. Документация к программе с описанием алгоритма работы, описанием входных и выходных данных и применяемых в программе мер защиты.

## Описание программы
- На вход поступает логин и пароль, вводимый пользователем
- Вызывается функция шифрования по ключу, которым является второй аргумент функции - целое число
- Определяем бит в заданной битовой маске используемой разрядности бинарного файла и генерируем окончательный вариант шифрованной строки, при необходимости - вызываем функцию реверса строки
- Сверяем полученную строку со строкой, определённой макросом в начале

## Меры защиты
В качестве мер защиты были использованы: 
* Использование функции шифрования входящих данных, вводимых пользователем
* Отказ от хранения открытых строк в программе
* Искусственное запутывание кода и добавление неочевидных параметров
* Использование битовой маски, которая влияет на результат шифрования строки (различается для 32 и 64 битных сборок исполняемого файла)
