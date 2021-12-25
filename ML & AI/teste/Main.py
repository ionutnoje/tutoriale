import nltk

# Create a reference variable for Class word_tokenize
tk = "ionut este tare"
tk1 = "noje este tare"
rezultat = nltk.word_tokenize(tk)
rezultat = nltk.word_tokenize(tk1)

print(rezultat)