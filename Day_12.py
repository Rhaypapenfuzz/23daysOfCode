class SentenceBreakdown:
    #function to find the length of the last word 
    #in a sentece
    def LengthOfLastWord(self, sentence):

        Word_List = sentence.split()
        lengthOfLastWord = 0
        for element in Word_List[-1]: 
          lengthOfLastWord += 1 
        print("Length of the last word in this sentence is: ", lengthOfLastWord)
        for word in sentence.split():
          print(word)      #print aindividual words of sentence
        return(lengthOfLastWord)

    #function to find the longest word in a sentece
    def LongestWord(self, sentence):
        Word_List = sentence.split()  #List of Words in sentence
        len_longestWord = 0
        for word in Word_List:
          if len(word) > len_longestWord: 
            len_longestWord = len(word)
            longestWord = word
        print("\n",Word_List)
        print("Length of the longest word is: ", len_longestWord)
        print("The longest word is: ",longestWord)
        return {longestWord: len_longestWord} #return longest word as key and length as value

use_class = SentenceBreakdown()
use_class.LengthOfLastWord("How are you doing today")
use_class.LongestWord("Hey!, Can you find the longest word in this sentence")
