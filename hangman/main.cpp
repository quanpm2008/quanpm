#include <bits/stdc++.h>

using namespace std;


const string WORD_LIST[] = {
"angle", "ant", "apple", "arch", "arm", "army",
"baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
"bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
"brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
"cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
"chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
"cow", "cup", "curtain", "cushion",
"dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
"face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
"foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
"hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
"hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
"leaf", "leg", "library", "line", "lip", "lock",
"map", "match", "monkey", "moon", "mouth", "muscle",
"nail", "neck", "needle", "nerve", "net", "nose", "nut",
"office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
"pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
"rail", "rat", "receipt", "ring", "rod", "roof", "root",
"sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
"shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
"square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
"store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
"toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
"wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
};



const int WORD_COUNT=sizeof(WORD_LIST)/sizeof(string);


void giatreo(int a)
{
    if(a==0)
    {
        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;
    }
    if(a==1)
    {
        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|          0 "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;

    }
    if(a==2)
    {
        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|          0 "<<'\n';
        cout<<"|          | "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;

    }
    if(a==3)
    {
        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|          0 "<<'\n';
        cout<<"|         /| "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;
    }
    if(a==4)
    {


        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|          0 "<<'\n';
        cout<<"|         /|\\"<<'\n';
        cout<<"|           "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;
    }
    if(a==5)
    {
        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|          0 "<<'\n';
        cout<<"|         /|\\ "<<'\n';
        cout<<"|         / "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;

    }
    if(a==6)
    {

        cout<<"------------"<<'\n';
        cout<<"|          |"<<'\n';
        cout<<"|          0 "<<'\n';
        cout<<"|         /|\\ "<<'\n';
        cout<<"|         / \\ "<<'\n';
        cout<<"|           "<<'\n';
        cout<<"----"<<endl;
    }


}

string ran()
{
    srand(time(0));
    int index=rand()%WORD_COUNT;

     string a=WORD_LIST[index];
     return a;
}



int main()
{
    string key=ran(), ans;
    for(int i=0;i<(int)key.size();i++)
    {
        ans+='-';
    }
    cout<<key;
    int cnt=0;
    char guess;

    while(key!=ans && cnt<6)
    {   cout<<"du doan:";
        cin>>guess;
        if(key.find(guess)==string::npos)
        {
            cnt++;
        }
        for(int i=0;i<(int)key.size();i++)
        {
            if(guess==key[i])
            {
                ans[i]=guess;
            }
        }
        cout<<"so lan doan sai: "<<cnt<<endl;
        cout<<"ans:";
        cout<<ans<<endl;
        giatreo(cnt);
    }

    cout<<key;

}
