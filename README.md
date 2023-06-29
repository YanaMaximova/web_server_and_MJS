# Model Web-server и Model-JS

### Постановка задачи:
* Реализация модельного веб-сервера, поддерживающая описанное ниже подмножество протокола     HTTP.
* Реализация поддержки общего шлюзового интерфейса (CGI) в разработанном веб-сервере.
* Реализация интерпретатора модельного языка описания сценариев для написания CGI-сценариев.

Язык реализации — Си++.

#### Реализация первого этапа:
Целью первого этапа задания является реализация статического веб-сервера, поддерживающего подмножество HTTP-протокола. 
Первая программа — «псевдо-сервер», цель которого — запись реальных запросов, посылаемых веб-клиентами (например, различными веб-браузерами). Сервер принимает запрос, записывает его в лог-файл и немедленно закрывает соединение. Сохраненные запросы можно использовать для отладки сервера. 

#### Реализация вторго этапа:
Целью второго этапа задания является добавление поддержки CGI в ранее разработанный модельный веб-сервер. 
Самая простая схема реализации CGI подразумевает, что сервер запускает отдельный процесс-потомок для обработки CGI-программы. Вывод программы перенаправляется во временный файл для последующего включения этого файла в ответ на запрос. Временный файл используется, т.к. программа может завершиться некорректно (и тогда её результаты должны быть проигнорированы без передачи клиенту), а также, чтобы узнать длину ответа и сформировать заголовок Content-length. После корректного завершения CGI-программы сервер генерирует ответ на основе выдачи программы. При реализации CGI особенно проявляются недостатки первой схемы реализации сервера (когда тот не приступает к обработке следующего запроса, пока не выполнит до конца текущий). Действительно, в этом случае сервер простаивает в ожидании завершения CGI-программы, которая может работать произвольно долго.

#### Реализация третьего этапа:
На третьем этапе требуется разработать интерпретатор модельного языка JavaScrip

### Методические материалы:
1. [Машечкин И.В. "Операционные системы"](https://ftp.vtyulb.ru/Операционные%20системы%20%28машбук%29.pdf)
2. Головин И.Г. "Практикум на ЭВМ. Модельный веб-сервер. Методическое пособие"
