from textblob import TextBlob
'''Sentiment analyser '''
y=input("Enter a sentence to analyse:-")
edu= TextBlob(y)
x=edu.sentiment.polarity
# Negative =x<0 and Neutral =0 and Positive =x>0 && x<=1
if x<0:
    print("Negative") 
elif x==0:
    print("Neutral")
elif x>0 and x<=1:
    print("Positive")
