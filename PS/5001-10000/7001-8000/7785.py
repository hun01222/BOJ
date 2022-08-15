import sys
input = sys.stdin.readline

n = int(input())
dic = {}

for _ in range(n):
	name, condition = map(str, input().split())
	if condition == "enter":
		dic[name] = "enter"
	else:
		if dic[name]:
			del dic[name]

for li in sorted(dic, reverse = True):
	print(li)