name = "noje"

print(len(name))    #functia len() returneaza lungimea variabilei dintre paranteze, la noi name

print(name.find("j"))   #functia .find() o sa returneze indexul la care gaseste litera pe care o introducem noi intre paranteze

print(name.capitalize())    #functia .capitalize o sa faca prima litera din string in litera mare de tipar

print(name.upper())     #functia .upper o sa faca tot numele in litere mari de tipar

print(name.lower())     #functia .lower o sa faca tot stringul in litere mici de tipar

print(name.isdigit())       #functia .isdigit o sa returneze true daca variabila care a apelat functia este numar

print(name.isalpha())       #functia .isalpha returneaza true daca stringul care a apelat functia este format din literele din alfabet, nu se include si spatiul
                            #deci daca stringul nostru are si spatii libere o sa il considere false


print(name.count("j"))     #functia .count o sa returneze numarul de aparitii a literei pe care o cautam in stringul care a apelat functia

print(name.replace("j","J"))    #functia .replace o sa inlocuiasca prima litera dintre paranteze cu a doua, prima este cea pe care o schimbam, iar a doua este cea cu care o schimbam

print(name*3)   #o sa printeze fara spatii unul dupa altul stringul