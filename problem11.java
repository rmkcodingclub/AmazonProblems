/**
SOlved by Mohammed Azarudeen K, CSE
*/

import java.io.*;

import java.util.*;

public class FindFirstNonRepeatedCharacter {

public static void main(String[] args) {

char name[] = "repeated".toCharArray();

for (int i = 0; i < name.length; i++) {

boolean uniqueChar = true;

for (int j = 0; j < name.length; j++) {

if (i != j && name[i] == name[j]) {

uniqueChar = false;

break;

}

}

if (uniqueChar) {

System.out.println(name[i]);

break;

}

}

}

}
