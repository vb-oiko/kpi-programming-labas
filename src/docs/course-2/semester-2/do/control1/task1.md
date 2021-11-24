## Завдання 1. Методика розв'язання відкритих транспортних задач. ##

Транспортна задача називається відкритою, якщо не досягається баланс між обсягом попиту та обсягом пропозиції. Тобто, наприклад, якщо запаси всіх постачальників менше чи більше потреб всіх споживачів.

Щоб застосувати до відкритої транспортної задачі метод розв'язання закритих транспортних задач, необхідно привести відкриту транспортну задачу до закритої моделі. Тобто. Необхідно виконати перетворення, щоб обсяги постачання та споживання були рівними.

Якщо не вистачає товару, щоб задовольнити потреби споживач, потрібно додати уявного (фіктивного) постачальника. Якщо пропозиція перевищує попит, додамо уявного (фіктивного) споживача.

У відкритій транспортній задачі це реалізується додаванням рядка або стовпця, залежно від того, чого не вистачає. Так як насправді фіктивний постачальник (споживач) не існує, то вартість доставки до нього від будь-якого пункту дорівнює нулю.

Тобто, щоб привести відкриту транспортну задачу до закритого (замкнутого) виду, додаємо стовпець (рядок) з нульовими цінами:

- якщо перевищують запаси – додаємо фіктивного споживача (стовпець)
- якщо перевищує попит - додаємо фіктивного постачальника (рядок)