# Healthcare_chatbot
Healthcare is especially important to lead a healthy and happy life.However, it is exceedingly difficult to obtain the  consultation with the doctor for every health problem. The idea here is to create a medical chatbot using AI which  can diagnose the disease and provide basic guidance for curing the disease along with its information and if  required connect to the specialist doctor. This will significantly help to reduce healthcare costs and improve  accessibility to the medical related problems through healthcare chatbot. Chatbots are computer program that use  human language to interact with humans. 


2   # Abstract

Healthcare is especially important to lead a healthy and happy life.However, it is exceedingly difficult to obtain the consultation with the doctor for every health problem. The idea here is to create a medical chatbot using AI which can diagnose the disease and provide basic guidance for curing the disease along with its information and if required connect to the specialist doctor. This will significantly help to reduce healthcare costs and improve accessibility to the medical related problems through healthcare chatbot. Chatbots are computer program that use human language to interact with humans. Chatbots store data in database to identify the sentence keywords and to make a query decision and answer the question. Ranking and sentence similarity calculation is performed using n-gram,TF-IDF and cosine similarity.
Keywords: Healthcare, Chatbot, AI, Virtual Assistance,TFID,n-gram

3   Introduction
Computers give us information; they engage us and help us in a lot of manners. A chatbot is a program intended to counterfeit smart communication on a text or speech. Yet, this paper only concentrates on text.

These systems can learn themselves and restore their knowledge using human assistance or using web resources. This application is incredibly fundamental since knowledge is stored in advance. The system application uses the question-and-answer protocol in the form of a chatbot to answer user queries. This system is developed to reduce the healthcare cost and time of the users, as it is not possible for the users to visit the doctors when immediately needed.

      The response to the question will be replied based on the user query and knowledge base. The significant keywords
Are fetched from the sentence and answer to those sentences. If the match is discovered or the significant, answer will be given or similar answers will be displayed.

The complex questions and answers present in the database are viewed and answered by an expert. Here the users can personally ask any questions regarding healthcare, as not much time will be wasted by the user for consulting a doctor. The input sentence of the chat pattern is stored in an RDBMS. The chatbot would coordinate the input sentence from the user question with the knowledge database of the chatbot. The important keywords are extracted from the given input sentence and the sentence similarity is found. The keyword ranking and sentence similarity are found using the N-gram, TF-IDF, and cosine similarity. The interfaces are standalone built using the C++ programming language.



4   Literature Review

Here the studies are based on to recognize emotions classification using AI methods. The studies train emotions classification using AI methods. The studies train emotions classification models from a lot of labelled data based on
classification models from a lot of labelled data based on recurrent neural network (RNN), deep learning, and convolutional neural network. Linguistic interaction is most important in counselling using Natural Language Processing (NLP) and Natural-language generation (NLG) to understand dialogues of users. Here the multi-modal approach is used of emotion-recognition. They have collected corpuses to learn semantic information of words and represent as vector using the word vector, synonym knowledge of lexical are collected [1].

A voice recognition chat-bot is developed in this paper. The questions asked to the bot are not understood are further processed using the expert-system of third parties. The web bots are created as web-friends based on text, a user entertainer. If the program is not only text-based, but also voice-based equipped, they concentrated on the improved system here. Here, a two-part process of capturing and analyzing an input signal is required for voice recognition. Recognition of data from the server response and processing of information. The server used here is a black box approach based on SOAP. Using an expert system makes it possible to improve unlimited and autonomous intelligence. [2]

This chatbot aims to make a conversation between human and machine. Here the system stores the knowledge database to identify the sentence and making a decision to answer the question. The input sentence will get the similarity score of input sentences using bigram. The chatbot knowledge is stored in RDBMS. [3]
The chatbot implemented using pattern comparison in which the order of the sentence is recognized and saved response pattern. Here the author describes the implementation of the chatbot Operating system, software, programming language, database and how results of input and output are stored. Here the input is taken using text () unction and other punctuation is removed using trim () function and random () function is used to choose a response from the database. The chatbot is used for an entertainment purpose.[4]
Here they use n-gram technique for extracting the words from the sentences. Here n-gram is used for comparison and deduction of the input with case data using Moro phonemes and phonemes as the deciding parameter. Probability analysis for the closest match is performed. The final expression is redirected through an expert system. [5]

The chatbot developed here for healthcare purposes for the android application. The user sends the text message or voice message using Google API. Here the user gets only related answer from the chatbot. SVM algorithm is used to classify the dataset. Here the Porter algorithm is used to discard unwanted words like suffixes or prefixes. [6]

The different documents served in web, the content is checked by tagging the dataset using n-gram based low dimensional demonstration, TF-IDF matrix that generates S, U, and V and finally multiplying the 3 matrices cosine similarity is calculated. [7]


Here the chatbot is created for the customer service that functions as public health service. The application uses N gram, TF-IDF and cosine similarity. The knowledge base is created for storing the question and answer. The application clearly shows extracted the keyword from the question and by using unigram, bigram, and trigram which helps in fast answering. [8]

Authors have suggested a framework which is using R language to communicate with Chatbot by using AIML. In this, authors have proposed a model which is more suitable for the educational purpose, idea behind this study is to provide more interactive way to student to get connect university system. [9]

5  Problem Statement
The chatbots are conversational virtual assistants which automate interactions with the users. Chatbots are powered by artificial intelligence using machine learning techniques to understand natural language. The main motive of the paper is to help the users regarding minor health information. Initially when the user’s visits the website first registers themselves and later can ask the bot their queries. The system uses an expert system to answer the queries if the answer is not present in the database. Here the domain experts also should register themselves by giving various details. The data of the chatbot stored in the database in the form of pattern-template. Here SQL is used for handling the database.

6   Objectives
The main objectives of the project are: -
⦁	To provide suitable cure for the disease by diagnosing based on the information given by the user.
⦁	To lower the costs of the treatment for poor people who cannot afford consulting a doctor by giving consultation fee.
⦁	Watching current world which is suffering from covid it is safer to consult a doctor online rather than going to the hospital.

7   Methodology
 Fig 1 is the system Architecture outline of chatbot healthcare application. The client inputs the question in the UI as the text. The UI gets the user query and after that sends it to the chatbot application. In the chatbot application, the literary experiences pre-processing steps incorporate tokenization where the words are tokenized, at that point the stop words are removed and feature extraction depends on ngram, TF-IDF, and cosine likeness. The question answers are stored in the knowledge database to recover the retrieve the answer.
word for increased processing. It separates text into words at whatever point it experiences one of the rundowns of indicated character. A Tokenization: The words or sentences separated word by 11 the words are separated from sentences and the punctuation are disposed of. This implies the next steps.  
 

Stop words removal: The stop words are removed from the sentences to extract important keyword. It is mainly employed to remove unnecessary things such as words occurring too frequently in sentences. It is also used to delete words that are not important or the words with no specific meanings such as an, a, or the. This step is applied to reduce processing time or computational complexity.

Feature extraction based on N-gram TFIDF: Feature extraction is a characteristic decrease process in the document; it ranks the attributes as per the document. By doing this step it upgrades the speed and adequacy of the document. It is used to extract the set of keywords and frequency of the keywords in the document.
TF-IDF: Term frequency and Inverse document frequency is used to calculate the weight of each term in the sentence.  
The term frequency is used to check how many times the term as been occurred in a particular sentence using the formula below. 
tf = tfi
Note: idf stands for inverse document frequency. 
The tf and idf are combined to produce the weight of the term or word in the document. The tf and idf values are multiplied to obtain the weight of each term in the document. ܹi = ݐ݂i *Ž ‘‰ܰȀ݂݀
Sentence similarity: Cosine similarity is being used to check the similarity between two sentences. The similarity between the query and document is directly proportional to the number of query weights. The similarity calculation result of the two documents ranges from 0 to 1 since the term
frequency cannot be negative. The formula for calculating cosine similarity is given below: 
 
Retrieve the matched sentence: The answers for the query which are obtained from the above process are retrieved and displayed in the user interface. 
Results and Analysis: The application uses a question and answers protocol where it consists of login page figure 2, where the user needs to give the details to register in the application if you are a new user, figure 3. Figure 4 shows the answer for the query is available in the database or displays similar answers for the query, figure 5. Figure 6 is the expert answering page where experts answer directly to the user’s question. The application uses n-gram for text compression using bigram and trigram for faster execution of the query. The N-gram, TF-IDF, and cosine similarity to convey the answers to the users.
