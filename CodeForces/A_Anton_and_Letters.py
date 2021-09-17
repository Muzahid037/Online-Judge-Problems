# print("hello")
# for val in enumerate(setOfLetters):
#     if val != '{' and val != '}' and val != ',' and val!=' ':
#         print(val)
# for i in range(len(setOfLetters)):
#     if setOfLetters[i] != '{' and setOfLetters[i] != '}' and setOfLetters[i] != ',' and setOfLetters[i] != ' ':
#         print(setOfLetters[i])

setOfLetters = input()
# print(setOfLetters)
alph = [0] * 26
ans = 0
for i in range(len(setOfLetters)):
    if setOfLetters[i] != '{' and setOfLetters[i] != '}' and setOfLetters[i] != ',' and setOfLetters[i] != ' ':
        alph[ord(setOfLetters[i])-ord('a')
             ] = alph[ord(setOfLetters[i])-ord('a')]+1

for i in range(len(alph)):
    if alph[i] > 0:
        ans = ans+1

print(ans)
