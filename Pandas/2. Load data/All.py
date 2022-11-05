import pandas as pd

#La toate printurile de mai jos putem sa atribuim rezultatul in alta variabila
#ex: df = pd.DataFrame(data, index = ["day1", "day2", "day3"]) #printeaza toate atributele respective
# print(df)


data = pd.read_csv('pokemon_data.csv') # load data from csv, csv ul trebuie sa fie in acelasi folder cu proiectul
#data1 = pd.read_excel('pokemon_data.xlsx') # load data from excel
#data2 = pd.read_csv('pokemon_data.txt', delimiter='\n') #load data from txt, dar specificam si delimitatorul, in cazul nostru taburi


print(data) # printeaza toate datele din csv
print("\n")


#The tail() method returns the headers and a specified number of rows, starting from the bottom.

print(data.tail(3)) #printam 3 inregistrari de la sfarsit
print("\n")


#The head() method returns the headers and a specified number of rows, starting from the top.
print(data.head(3)) #printam 3 inregistrari de la inceput
print("\n")





# reading data with pandas

# 1. READ HEADERS
print(data.columns) # printeaza headerele
print("\n")



# 2. READ EACH COLUMN/ MULTIPLE
print(data["Name"]) # printam toate numele de la fiecare linie din csv
print("\n")

print(data["Defense"]) # printam toate defensurile de la fiecare linie din csv
print("\n")



print(data["Defense"][0:5]) # primele 5 defensuri
print("\n")




print(data[["Defense", "Type 1", "HP"]]) # printam toate defensurile, typurile 1 si hp urile
print("\n")





print(data[["Defense", "Type 1", "HP"]][0:5]) # primele 5 defensuri, typeuri 1 si hp uri
print("\n")



# 3. READ EACH RAW/ MULTIPLE

#ILOC inseamna integer location si cauta infunctie de index
print(data.iloc[1]) #printam toate elementele de pe a doua linie
print("\n")
print(data.iloc[0:4]) # printam toate elementele de pe liniile din interval
print("\n")
print(data.iloc[2,1]) #printam elementul 1 din randul 3
print("\n")

#printam toate randurile si toate elementele folosin un for
for index,row in data.iterrows():
    print(index,row["Name"]) # daca scoatem paranteza patrata o sa printeze toate atributele
print("\n")

#LOC o sa caute in functie de o informatie specifica pe care o dorim ex: name, type 1 etc.
#Pandas use the loc attribute to return one or more specified row(s)
print(data.loc[data['Type 1'] == "Fire"])#printeaza informatiile de pe linie in functie de o valoare specifica pe care o cautam noi in acest caz Type 1 sa fie Fire
print("\n")



#4. Functii aplicabile pentru datasetul nostru
# High Level description of your data (min, max, mean, std dev, etc.)

#Definition and Usage
#The describe() method returns description of the data in the DataFrame.

#If the DataFrame contains numerical data, the description contains these information for each column:

#count - The number of not-empty values.
#mean - The average (mean) value.
#std - The standard deviation.
#min - the minimum value.
#25% - The 25% percentile*.
#50% - The 50% percentile*.
#75% - The 75% percentile*.
#max - the maximum value.

#*Percentile meaning: how many of the values are less than the given percentile. Read more about percentiles in our Machine Learning Percentile chapter.

#print(data.describe())
df = data.describe()
print(df)
print("\n")


#Check the number of maximum returned rows:
print(pd.options.display.max_rows)
print("\n")



#The DataFrames object has a method called info(), that gives you more information about the data set.
print(data.info())
print("\n")


#CLEANING THE DATASET

#Note: By default, the dropna() method returns a new DataFrame, and will not change the original.

#new_data = data.dropna()



#Note: Now, the dropna(inplace = True) will NOT return a new DataFrame, but it will remove all rows containing NULL values from the original DataFrame.
#data.dropna(inplace = True)
#print(data)


#FILL EMPTY SPACES

#The fillna() method allows us to replace empty cells with a value:
#Replace NULL values with the number 130:
data.fillna(130, inplace = True) #o sa se aplice direct pe dataframeul nostru
new_data = data.fillna(120) # o sa se salveze dataframeu nostru in alta variabila
print(new_data)
print("\n")

#Replace NULL values in the "Name" columns with "ionut":
data["Name"].fillna("ionut", inplace = True)


#Replace Using Mean, Median, or Mode
#A common way to replace empty cells, is to calculate the mean, median or mode value of the column.
#Pandas uses the mean() median() and mode() methods to calculate the respective values for a specified column:

#Calculate the MEAN, and replace any empty values with it:
#Mean = the average value (the sum of all values divided by number of values).
#x = data["Health"].mean()
#data["Health"].fillna(x, inplace = True)


#Calculate the MEDIAN, and replace any empty values with it:
#Median = the value in the middle, after you have sorted all values ascending.
#x = data["Health"].mode()[0]
#data["Health"].fillna(x, inplace = True)


#Calculate the MODE, and replace any empty values with it:
#Mode = the value that appears most frequently.
#x = data["Health"].mode()[0]
#data["Health"].fillna(x, inplace = True)




#Sorting
new_data1 = data.sort_values("Name") #sortare in ordine alfabetica a numelor
print(new_data1)
print("\n")

new_data1 = data.sort_values("Name", ascending=False) #sortare in ordine invers alfabetica
print(new_data1)
print("\n")


new_data1 = data.sort_values(["Type 1","HP"]) #sortare in ordine crescatoare in functie de type di hp
print(new_data1)
print("\n")





new_data1 = data.sort_values(["Type 1","Speed"], ascending=[1,0]) #sortare in ordine crescatoare a type 1 si descrescatoare pentru speed
print(new_data1)
print("\n")



#adaugarea unei coloane in care stocam toatlul sumei dintre mai multe atribute
data["Total"] = data['HP'] + data['Attack'] + data['Defense'] + data['Sp. Atk'] + data['Sp. Def'] + data['Speed']
new_data1 = data.sort_values(['Total'], ascending=True)
print(new_data1)
print("\n")



#drop columns
#drop_data = data.drop(columns=['Legendary', 'Speed', 'HP', 'Name'])
drop_data = data.drop(columns=['Total'])
print(drop_data)

drop_data['Total'] = df.iloc[:, 4:10].sum(axis=1) #axis = 1 inseamna ca adunam pe orizontala, daca e 0 adunam pe verticala
print(drop_data)


#saving the dataframe after midifications

data.to_csv("data_nou.txt", index=False, sep='\t')  #o sa il salveze in format txt si separam atributele cu un tab
data.to_csv("data_nou_csv.csv") # o sa il salveze in format csv
data.to_csv("data_nou_csv.csv", index=False) # o sa il salveze in format csv si nu o sa avem index la inceput de linii

data.to_excel("data_nou_excel.xlsx", index=False) # o sa il salveze in format excel si nu o sa avem index la inceput de linii



#https://youtu.be/vmEHCJofslg?t=1943


