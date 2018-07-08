#repeat.cpp
描述：
给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。假定该字符串只包含小写字母。


  int return_index(string input){
	  int character[26];
	  for(int i =0; i < 26;i++)
	 	  character[i] = 0;

	  for(int i = 0; i < input.length(); i++)
		  character[(input[i]-'a')] ++;

	  for(int i = 0; i <input.length();i++)
		  if(character[(input[i]-'a')] == 1)
			  return i;

	  return -1;

  }
  
1.第一遍循环创建一个数组 用于记录二十六个字母各自出现次数
2.第二遍循环 记录二十六个字母各自出现次数
3.第三遍循环 按照字符串顺序判断那个字母出现次数是否为1

  }

******

#link_list.cpp
描述：
给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。

node* seperate_odd_even(node* test_node){

	if(test_node==NULL ||test_node->next ==NULL)
	return test_node;
	else{

	node* odd = test_node;
	node* even = test_node->next;
	node* even_head = even;

	while(even !=NULL && even->next != NULL){
	odd->next = even->next;
	odd = odd->next;
	even->next = odd->next;
	even = even->next;
	}

	odd->next = even_head;
	return test_node;
	}

}

／／将偶数节点和奇数节点分开 然后连起来

