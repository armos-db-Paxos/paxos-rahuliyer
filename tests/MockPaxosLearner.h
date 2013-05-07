#ifndef __MOCK_PAXOS_LEARNER_H__
#define __MOCK_PAXOS_LEARNER_H__

#include "PaxosLearner.h"

class MockPaxosLearner : public PaxosLearner {
public:
  MOCK_METHOD1(learn, void(const std::string&));
};

#endif
