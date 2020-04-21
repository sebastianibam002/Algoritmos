#include <string>

const int INITIAL_SIZE = 5;

template<typename VT>
struct KeyValueNode
{
  std::string key;
  VT value;
  KeyValueNode<VT> *next;
};

template <typename VT>
class HashMap
{
private:
  KeyValueNode<VT> **table;
  int table_size;
  int count;

  int hash_fun(std::string key);
  KeyValueNode<VT>* search_bucket(int i, std::string key);

public:
  HashMap();
  ~HashMap();

  int size();
  bool empty();
  void clear();
  void insert(std::string key, VT value);
  VT get(std::string key);
  bool contains(std::string key);
  void remove(std::string key);

  /******/
  void display();
  /*******/
};


//constructor
template<typename VT> 
HashMap<VT>::HasMap()
{
  
  table_size = INITIAL_SIZE;
  table = new KeyValueNode<VT>*[INITIAL_SIZE];
  for(unsigned int i; i < table_size; i++)
    {
      
      table[i] = nullptr;
    }
  count = 0;
}

template<typename VT>
int HashMap<VT>::size()
{
  return count;
}

template<typename VT>
bool HashMap<VT>::empty()
{
  return count==0;
}

template<typename VT>
int HashMap<VT>::hash_fun(std::string key)
{
  int index = 0;
  for(char c : key)
    index+= c;
  return index % table_size;
}
