from datetime import datetime

weekDays = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
month, day = map(int, input().split())
print(weekDays[datetime(2007, month, day).weekday()])