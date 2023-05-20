class Encrypter {
public:
    map<char, string>m;
    vector<string>d;

    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {


        for (int i = 0; i < keys.size(); i++) {
            char x = keys[i];
            m[x] = values[i];
        }
        d = dictionary;
    }

    string encrypt(string a) {
        string ans = "";
        for (int i = 0; i < a.length(); i++) {
            if (m.find(a[i]) == m.end()) {
                return "";
            }
            ans += m[a[i]];
        }
        return ans;
    }

    int decrypt(string b) {
        int count = 0;

        for (int i = 0; i < d.size(); i++) {
            //d[i]=string
            string ans = encrypt(d[i]);

            if (ans == b) {
                count++;
            }
        }

        return count;
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */