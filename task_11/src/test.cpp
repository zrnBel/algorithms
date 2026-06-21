#include <gtest/gtest.h>

#include "find_subsequence.hpp"

TEST(FindSubsequenceBasic, Example1) {
  ASSERT_EQ(FindSupsequence("abcsrlfcxdms", "lrf"), 5);
}

TEST(FindSubsequenceBasic, Example2) {
  ASSERT_EQ(FindSupsequence("smnkfwlvk", "nmsf"), -1);
}

TEST(FindSubsequenceBasic, Example3) {
  ASSERT_EQ(FindSupsequence("abcabc", "cab"), 1);
}

TEST(FindSubsequenceBasic, ExactMatch) {
  ASSERT_EQ(FindSupsequence("abc", "abc"), 1);
}

TEST(FindSubsequenceBasic, PermutationMatch) {
  ASSERT_EQ(FindSupsequence("cba", "abc"), 1);
}

TEST(FindSubsequenceBasic, MatchInMiddle) {
  ASSERT_EQ(FindSupsequence("xxbacyy", "abc"), 3);
}

TEST(FindSubsequenceBasic, RepeatedCharacters) {
  ASSERT_EQ(FindSupsequence("aabcc", "aba"), 1);
}

TEST(FindSubsequenceBasic, SingleCharacter) {
  ASSERT_EQ(FindSupsequence("abcdef", "d"), 4);
}

TEST(FindSubsequenceBasic, SingleCharacterMissing) {
  ASSERT_EQ(FindSupsequence("abcdef", "z"), -1);
}

TEST(FindSubsequenceBasic, MatchAtEnd) {
  ASSERT_EQ(FindSupsequence("xxxxcab", "abc"), 5);
}

TEST(FindSubsequenceCorner, SequenceShorterThanPattern) {
  ASSERT_EQ(FindSupsequence("ab", "abc"), -1);
}

TEST(FindSubsequenceCorner, AllSameCharactersFound) {
  ASSERT_EQ(FindSupsequence("aaaaaa", "aaa"), 1);
}

TEST(FindSubsequenceCorner, AllSameCharactersNotFound) {
  ASSERT_EQ(FindSupsequence("aaaaaa", "aab"), -1);
}

TEST(FindSubsequenceCorner, FirstPossibleMatchReturned) {
  ASSERT_EQ(FindSupsequence("abcbac", "abc"), 1);
}

TEST(FindSubsequenceCorner, MultipleOccurrences) {
  ASSERT_EQ(FindSupsequence("cbabcab", "abc"), 1);
}

TEST(FindSubsequenceCorner, DuplicateLettersInPattern) {
  ASSERT_EQ(FindSupsequence("bbaac", "aab"), 2);
}

TEST(FindSubsequenceCorner, NoMatchingCounts) {
  ASSERT_EQ(FindSupsequence("abcc", "aabc"), -1);
}

TEST(FindSubsequenceCorner, LongPermutation) {
  ASSERT_EQ(FindSupsequence("zzzyxwvutsrqpon", "wvuts"), 6);
}