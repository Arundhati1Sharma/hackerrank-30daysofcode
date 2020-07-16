include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};
#include<numeric>
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        
            Student(string firstName, string lastName, int id, vector<int> testScores): Person(firstName, lastName,id)
{
    this->testScores=testScores;        
}
            
        
        char calculate(){
            float a = accumulate( testScores.begin(), testScores.end(), 0.0)/testScores.size();
            if(a>=90 && a<=100)
                return 'O';
            else if(a>=80 && a<90)
                    return 'E';
                else if (a>=70 && a<80) 
                        return 'A';
                     else if (a>=55 && a<70) 
                            return 'P';
                          else if (a>=40 && a<55) 
                                return 'D';
                               else 
                                return 'T';
        } 
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
