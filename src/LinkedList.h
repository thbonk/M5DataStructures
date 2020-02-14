/*
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

template <class T> struct Node {
    T data;
    struct Node<T> *prev;
    struct Node<T> *next;
};

template <class T> class LinkedList {
    private:
        int count;
        struct Node<T> *head;
        struct Node<T> *tail;

    public:
        LinkedList<T>() {
            count = 0;
            head = NULL;
            tail = NULL;
        };

        bool isEmpty();
        int  lenght();

        void append(T value);
        void append(LinkedList<T> list);
        void prepend(T value);
        void prepend(LinkedList<T> list);
        void insert(int index, T value);
        T    remove(index);
        T    removeHead();
        T    removeTail();

        T    get(int index);
        T    getHead();
        T    getTail();
};

#endif
