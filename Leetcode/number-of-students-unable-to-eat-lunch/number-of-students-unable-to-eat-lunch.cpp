class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> choice;
        for(int i=0;i<sandwiches.size();i++){
            choice.push(students[i]);
        }
        int i=0;
        int n=students.size();
        int tmp2=0;
        while(tmp2<choice.size()){
            if (choice.front()!=sandwiches[i]){
                int tmp=choice.front();
                choice.pop();
                choice.push(tmp);
                tmp2++;
            } else{
                choice.pop();
                i++;
                tmp2=0;
            }
        }
        return choice.size();
    }
};