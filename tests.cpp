#include <gtest/gtest.h>
#include "priorityqueue.h"
#include "myrandom.h"

TEST(priorityqueue, one) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[]  = {1, 2, 3, 5, 2, 2, 2, 3, 4};
    priorityqueue<int> pq;
    for(int i = 0; i < n; i++){
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), 9);
    stringstream ss;
    for (auto e: map) {
        int priority = e.first;
        vector <int> values = e.second;
        for (size_t j = 0; j < values.size(); j++) {
            ss << priority << " value: " << values[j] << endl;
    }
  }
  EXPECT_EQ(pq.toString(), ss.str());
 }

TEST(priorityqueue5, one) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[]  = {1, 2, 3, 5, 2, 2, 2, 3, 4};
    priorityqueue<int> pq;
    priorityqueue<int> pq2;
    for(int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq2 = pq;
    EXPECT_EQ(pq2.Size(), 9);
    stringstream ss;
    for (auto e: map) {
        int priority = e.first;
        vector <int> values = e.second;
        for (size_t j = 0; j < values.size(); j++) {
            ss << priority << " value: " << values[j] << endl;
        }
    }
    EXPECT_EQ(pq2.toString(), ss.str());
}
TEST(priorityqueue1, one) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    int prs[]  = {1, 2, 3, 2, 2, 2, 2, 3, 4};
    priorityqueue<int> pq;
    for(int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), 9);
}

TEST(priorityqueue2, one2) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    int prs[]  = {1, 2, 3, 2, 2, 2, 2, 3, 4};
    priorityqueue<int> pq;
    for(int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    EXPECT_EQ(pq.Size(), 0);
}
TEST(priorityqueue6, one6) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[]  = {1, 2, 3, 5, 2, 2, 2, 3, 4};
    
     int vals2[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs2[]  = {1, 2, 3, 5, 2, 2, 2, 3, 4};
    
    priorityqueue<int> pq;
    priorityqueue<int> pq2;
    for(int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    for(int i = 0; i < n; i++) {
        pq2.enqueue(vals2[i], prs2[i]);
        map[prs2[i]].push_back(vals2[i]);
    }
    bool value;
    value = (pq2 == pq);
    cout << "The value of this test is " << value << endl;
    EXPECT_EQ(pq2.Size(), 9);
}

TEST(priorityqueue10, one10) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 17};
    int prs[]  = {1, 2, 3, 5, 2, 2, 2, 3, 6};
    int vals2[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs2[]  = {1, 2, 3, 5, 2, 2, 2, 3, 8};
    priorityqueue<int> pq;
    priorityqueue<int> pq2;
    for(int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    for(int i = 0; i < n; i++) {
        pq2.enqueue(vals2[i], prs2[i]);
        map[prs2[i]].push_back(vals2[i]);
    }
    bool value;
    value = (pq2 == pq);
    cout << "The value of this test is " << value << endl;
    EXPECT_EQ(pq2.Size(), 9);
}
TEST(priorityqueue11, one) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 50, 17, 6, 7, 8, 9, 2, 17};
    int prs[]  = {1, 2, 3, 5, 2, 2, 2, 3, 6};
    int vals2[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs2[]  = {1, 2, 3, 5, 2, 2, 2, 3, 8};
    priorityqueue<int> pq;
    priorityqueue<int> pq2;
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    for (int i = 0; i < n; i++) {
        pq2.enqueue(vals2[i], prs2[i]);
        map[prs2[i]].push_back(vals2[i]);
    }
    bool value;
    value = (pq2 == pq);
    cout << "The value of this test is " << value << endl;
    EXPECT_EQ(pq2.Size(), 9);
}
TEST(priorityqueue12, beginNextInt) {
 map<int, vector<int>> map;
 int n = 100;
 int vals[100];
 int prs[100];
 priorityqueue<int> pq;
 EXPECT_EQ(pq.Size(), 0);
 for (int i = 0; i <100; i++) {
     int n = randomInteger(0,1);
     vals[i] = n;
     int s  = randomInteger(0,2);
      prs[i] = s;
    }

 for (int i = 0; i < n; i++) {
  pq.enqueue(vals[i], prs[i]);
  EXPECT_EQ(pq.Size(), i+1);
  map[prs[i]].push_back(vals[i]);
 }
 EXPECT_EQ(pq.Size(), n);
 pq.begin();
 for (auto &e : map) {
  int value = 0;
  int priority = 0;
  int priorityMap = e.first;
  vector<int> values = e.second;
  for (size_t i = 0; i < values.size(); i++) {
  pq.next(value, priority);
  EXPECT_EQ(priority, priorityMap);
  }
 }
}

TEST(priorityqueue43, beginNextInt) {
 map<int, vector<int>> map;
 int n = 10;
 int vals[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int prs[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
 priorityqueue<int> pq;
 EXPECT_EQ(pq.Size(), 0);

 for (int i = 0; i < n; i++) {
  pq.enqueue(vals[i], prs[i]);
  EXPECT_EQ(pq.Size(), i+1);
  map[prs[i]].push_back(vals[i]);
 }
 EXPECT_EQ(pq.Size(), n);
 pq.begin();
 for (auto &e : map) {
  int value = 0;
  int priority = 0;
  int priorityMap = e.first;
  vector<int> values = e.second;
  for (size_t i = 0; i < values.size(); i++) {
  pq.next(value, priority);
  EXPECT_EQ(priority, priorityMap);
  }
 }
}

TEST(priorityqueue3, one) {
    map <int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[]  = {1,2,3,5,2,2,2,3,4};
    
 
    priorityqueue<int> pq;
    for(int i = 0; i < n; i++){
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    
    EXPECT_EQ(pq.Size(), 9);
    int n2 = 10;
    int vals2[] = {15, 16, 17, 6, 7, 8, 9, 2, 1, 2};
    int prs2[]  = {1,2,3,5,2,2,2,3,4, 5};
 
    priorityqueue<int> pq2;
    for(int i = 0; i < n2; i++){
        pq2.enqueue(vals2[i], prs2[i]);
        map[prs2[i]].push_back(vals2[i]);
    }
    pq = pq2;
    
    EXPECT_EQ(pq.Size(), 10);
}

TEST(priorityqueue22, beginNextInt) {
 map<int, vector<int>> map;
 int n = 13;
 int vals[] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5};
 int prs[] = {0, 0, 2, 1, 3, 4, 5, 1, 0, 0, 0, 9, 0};

 priorityqueue<int> pq;
 EXPECT_EQ(pq.Size(), 0);

 for (int i = 0; i < n; i++) {
  pq.enqueue(vals[i], prs[i]);
  EXPECT_EQ(pq.Size(), i+1);
  map[prs[i]].push_back(vals[i]);
 }
 EXPECT_EQ(pq.Size(), n);
 pq.begin();
 for (auto &e : map) {
  int value, priority;
  int priorityMap = e.first;
  vector<int> values = e.second;
  for (size_t i = 0; i < values.size(); i++) {
  pq.next(value, priority);
  EXPECT_EQ(value, values[i]);
  EXPECT_EQ(priority, priorityMap);
  }
 }
}

TEST(deque, beginNextInt) {
 map<int, vector<int>> map;
 int n = 13;
 int vals[] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5};
 int prs[] = {0, 0, 2, 1, 3, 4, 5, 1, 0, 0, 0, 9, 0};
 priorityqueue<int> pq;
 EXPECT_EQ(pq.Size(), 0);
 for (int i = 0; i < n; i++) {
  pq.enqueue(vals[i], prs[i]);
  EXPECT_EQ(pq.Size(), i+1);
  map[prs[i]].push_back(vals[i]);
 }
 EXPECT_EQ(pq.Size(), n);
 pq.begin();
 for (auto &e : map) {
  int value, priority;
  int priorityMap = e.first;
  vector<int> values = e.second;
  for (size_t i = 0; i < values.size(); i++) {
   pq.dequeue();
  }
 }
}

TEST(deque2, beginNextInt) {
    map<int, vector<string>> map;
    int n = 8;
    string vals[] = {"Mosrour", "Tabshir", "Nadel", "Fahmeen", "Afreen", "Zeba", "Umair", "Farjan"};
    int prs[] = {0, 0, 0, 1, 0, 5, 2, 1};
    priorityqueue<string> pq;
    EXPECT_EQ(pq.Size(), 0);
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<string> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
            EXPECT_EQ(pq.Size(), n);
        }
    }
    }
 
TEST(deque3, beginNextInt) {
    map<int, vector<char>> map;
    int n = 8;
    char vals[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int prs[] = {0, 0, 0, 1, 0, 5, 2, 1};
    priorityqueue<char> pq;
    EXPECT_EQ(pq.Size(), 0);
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<char> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
    EXPECT_EQ(pq.Size(), n);
        }
    }
 }
TEST(deque16, beginNextInt) {
    map<int, vector<int>> map;
    int n = 8;
    int vals[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
    int prs[] = {0, 0, 0, 1, 0, 5, 2, 1};
    priorityqueue<int> pq;
    EXPECT_EQ(pq.Size(), 0);
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<int> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
            EXPECT_EQ(pq.Size(), n);
        }
    }
 }
TEST(dequeue17, beginNextInt){
    map<int, vector<int>> map;
    int n = 1000;
    int vals[1000];
    int prs[1000];
    priorityqueue<int> pq;
    for (int i = 0; i <1000; i++) {
        int n = randomInteger(0,100);
        vals[i] = n;
        int s  = randomInteger(0,10);
        prs[i] = s;
    }
        for (int i = 0; i < n; i++) {
            pq.enqueue(vals[i], prs[i]);
            EXPECT_EQ(pq.Size(), i+1);
            map[prs[i]].push_back(vals[i]);
        }
        EXPECT_EQ(pq.Size(), n);
        pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<int> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
            EXPECT_EQ(pq.Size(), n);
        }
    }
}
TEST(dequeue18, beginNextInt){
    map<int, vector<int>> map;
    int n = 15;
    int vals[] = {14,16,8,2, 4, 15, 20, 18, 5, 8, 20, 7, 8, 6, 12};
    int prs[] = {10, 8, 0, 0, 2, 6, 7, 10, 20, 20, 20, 14, 17, 16, 14} ;
    priorityqueue<int> pq;
    for (int i = 0; i < n; i++){
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<int> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            int s = n-1;
        }
    }
}
TEST(deque20, beginNextInt) {
    map<int, vector<int>> map;
    int n = 14;
    int vals[] = {7, 3, 8, 4, 2, 4, 8, 3, 4, 9, 7, 8, 9, 10};
    int prs[] = {5, 10, 4, 0, 1, 10, 3, 7, 9, 5, 7, 8, 4, 3};
    priorityqueue<int> pq;
    EXPECT_EQ(pq.Size(), 0);
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
   }
   EXPECT_EQ(pq.Size(), n);
   pq.begin();
   for (auto &e : map) {
       int  priority = 0;
       int priorityMap = e.first;
       vector<int> values = e.second;
       for (size_t i = 0; i < values.size(); i++) {
           pq.dequeue();
           n = n-1;
           EXPECT_EQ(pq.Size(), n);
       }
    }
}
TEST(deque54, beginNextInt) {
    map<int, vector<int>> map;
    int n = 10;
    int vals[] = {7, 3, 8, 4, 2, 4, 8, 3, 4, 9};
    int prs[] = {5, 10, 4, 0, 1, 10, 3, 7, 9, 5};
    priorityqueue<int> pq;
    EXPECT_EQ(pq.Size(), 0);
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
       int  priority = 0;
       int priorityMap = e.first;
       vector<int> values = e.second;
       for (size_t i = 0; i < values.size(); i++) {
           pq.dequeue();
           n = n-1;
           EXPECT_EQ(pq.Size(), n);
       }
   }
}
TEST(dequeue27, beginNextInt){
    map<int, vector<int>> map;
    int n = 10000;
    int vals[10000];
    int prs[10000];
    priorityqueue<int> pq;
    for (int i = 0; i <100; i++) {
        int n = randomInteger(0,1);
        vals[i] = n;
        int s  = randomInteger(0,2);
        prs[i] = s;
    }
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<int> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
            EXPECT_EQ(pq.Size(), n);
        }
    }
}
TEST(dequeue30, beginNextInt){
    map<int, vector<int>> map;
    int n = 1000;
    int vals[1000];
    int prs[1000];
    priorityqueue<int> pq;
    for (int i = 0; i < 1000; i++) {
        int n = randomInteger(0, 100);
        vals[i] = n;
        int s  = randomInteger(0, 1000);
        prs[i] = s;
    }
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<int> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
            EXPECT_EQ(pq.Size(), n);
        }
    }
}
TEST(dequeue29, beginNextInt){
    map<int, vector<int>> map;
    int n = 100;
    int vals[100];
    int prs[100];
    priorityqueue<int> pq;
    for (int i = 0; i < 100; i++) {
        int n = randomInteger(0, 100);
        vals[i] = n;
        int s  = randomInteger(0, 10);
        prs[i] = s;
    }
    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        EXPECT_EQ(pq.Size(), i+1);
        map[prs[i]].push_back(vals[i]);
    }
    EXPECT_EQ(pq.Size(), n);
    pq.begin();
    for (auto &e : map) {
        int  priority = 0;
        int priorityMap = e.first;
        vector<int> values = e.second;
        for (size_t i = 0; i < values.size(); i++) {
            pq.dequeue();
            n = n-1;
            EXPECT_EQ(pq.Size(), n);
        }
    }
}