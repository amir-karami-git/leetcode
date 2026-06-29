#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;
int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(int i=0;i<patterns.size();i++){
            int aw=0;
            int awn=0;
            for (int j = 0; j < word.size(); j++) {
                if(patterns[i][aw]==word[j]){
                    aw++;
                }
                else{
                    j-=aw;
                    //if(patterns[i][0]==word[j]){
                      //  aw=1;
                    //}
                    //else{
                        aw=0;
                    //}
                    
                }
                if((aw)==patterns[i].size()){
                    awn=1;
                    break;
                }
            }
            if(awn==1){
                cout<<patterns[i]<<endl;
                cnt++;
            }
        }
        return cnt;
}

int main(){
    vector<string> p= {"e","ulhjriiikuwwi","odtbmiyiv","iiku","o","nao","ilrbdhfvndjaxohexcynpgocoqorifjngaurokumcqqkirqp","zmt","tuxulhjriiikuwwibjpodtbmiyiv","lhjriiikuwwibjpodtbmiyi","qjnwwkfqhztiyqayiabjjzyqhumh","lhjriiikuwwibjpodtbmiyiv","oyaloibpkqpyubftinknjraptsuqgejucpfigc","fdqvajkfornietcdvxltbktlkg","bcxslqwrjaabvywpynzfojetmnnwrurimjgwl","ncvvyhbznxrxoonfrzfmecfdnrvikffpvrc","gxvzmtuxulhjriiikuwwibjpodtbmiyi","ozuwzgetoddakvjwiwzocpwpiavcyclxhlguhfqtpbk","ktwqukguxobakxvbitkkdemvlmqypd","gxvzmtuxulhjri","xulhjriiiku","sjemhhtbqastmbtbvsfnuygqfypmmi","gqfmyqbjcvuxsjdaeffwthlelb","kuwwibjpodtbmiyivse","ydwiabsimbkdwmsvgp","ixrzoktohtadgblem","uicfykignmptxodjd","kecqujgjynq","sruqpwjevngokrbyi","rijyzrhrygxvzmtuxulhjriii","gsljxjrmkzbwaqdgmwysnblp","arkmbbafkziemddeqripnyjoavmoaxtn","gxhijktottj","ibjpodtbmiyivse","j","qzvmjstehwibuqcqlzdam","ikuwwibjpodt","mnrp","pduagikyudhcvdnqoaadqvvmhluywfsstqnawfmq","vse","iyiv","miyivs","qdfrbkhffkksgtjpnbgvqtrnigbnoacmqkepllouhqpgskpupy","wxbqfmzvmmffwtwjhjpuitcfmknnuwdtamtutiukmpsxzu","odtbmiyi","hrygxvzmtuxulhjriiiku","yzrhrygxvzmtuxu","se","gixgfjtunbltzcwgkrheavilcvektnsizvrrabmysx","hjriiikuwwibj","ahaeorlnaqkk","gvnyr","tynqzmrvdjaznuji","jbwybcttaspwsbieawybfqxsiwxulwkouezkhbauadatb","uwwibjpodt","gxv","zrhrygxvzmtuxulhjriiikuwwib","wivvuywmwchszzctw","lijcroypqr","mrx","m","ygngqghhza","riiikuwwibjpodtbmiyivs","tymtjqykindweexrfztizyagijnxntrcrcy","vse","kntxszudqpmtlrxzspcfivbrwonejzywv","ygxvzmtuxulh","wsnnrijyzrhrygxvzmtuxulhjriiik","zpymedyxskwqddvxlycxvq","qdkm","gxvzmtuxu","snnrijyzrhrygxvzmtuxulhjriiikuwwibjpo","iyivserr","yzrhrygxvzmt","rygxvzmtuxulhjrii","snnrijyzrhrygxvzmtuxul","gxvzmtuxulhjriiikuwwibjpodtbmiyivserr","kuwwibjpodt","ibjpodtbmiy","mtuxulhjriii","zrhrygxvzmtu","qxjvgdyuqt","rygxv","gnwmvzqhrodzqdvdexgupqbzogcpmtfq","oleibiotmojkqexnnlx","dtb","jjividhfhdixcvyduyunoiiipyvi","podtb","jpodtbmiyi","iiku","od","kuwwibjpodtb","b","irugjrzvsfp","wsnnrijyzrhrygxvzmtuxulhjrii","jriiikuwwibjpodtbmi"};
    string s = "wsnnrijyzrhrygxvzmtuxulhjriiikuwwibjpodtbmiyivserr";
    cout << numOfStrings(p,s);
    return 0;
}