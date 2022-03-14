/*
  Knowing whether a person is young, beautiful and loved, find out if they contradict Mary's belief.

  A person contradicts Mary's belief if one of the following statements is true:

    they are young and beautiful but not loved;
    they are loved but not young or not beautiful.
  input:  young = true, beautiful = true, and loved = true
  output: solution(young, beautiful, loved) = false
*/

bool solution(bool young, bool beautiful, bool loved) {
    if (loved)
        return !young || !beautiful;
    else return young && beautiful;
}
