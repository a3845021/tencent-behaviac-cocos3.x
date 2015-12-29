﻿// ---------------------------------------------------------------------
// This file is auto-generated by behaviac designer, so please don't modify it by yourself!
// ---------------------------------------------------------------------

#pragma once
#include "behaviac/agent/agent.h"
#include "behaviac/agent/taskmethod.h"
#include "behaviac/property/typeregister.h"
#include "customizedtypes.h"

namespace behaviac
{
	class CppBehaviorLoaderImplement : CppBehaviorLoader
	{
	public:
		CppBehaviorLoaderImplement()
		{
			AgentProperties::SetInstance(this);
		}

		virtual ~CppBehaviorLoaderImplement()
		{
		}

		virtual bool load()
		{
			// ---------------------------------------------------------------------
			// properties
			// ---------------------------------------------------------------------

			AgentProperties* bb = NULL;

			// Enemy
			bb = BEHAVIAC_NEW AgentProperties("Enemy");
			AgentProperties::SetAgentTypeBlackboards("Enemy", bb);
			bb->AddProperty("int", false, "enemyType", "0", "Enemy");
			bb->AddProperty("vector<float>", false, "m_init_speed", "4:50|50|100|150", "Enemy");
			bb->AddProperty("float", false, "initSpeed", "0", "Enemy");
			bb->AddProperty("float", false, "randomSpeed", "50", "Enemy");

			// Hero
			bb = BEHAVIAC_NEW AgentProperties("Hero");
			AgentProperties::SetAgentTypeBlackboards("Hero", bb);
			bb->AddProperty("bool", false, "m_isAI", "false", "Hero");

			// NPC
			bb = BEHAVIAC_NEW AgentProperties("NPC");
			AgentProperties::SetAgentTypeBlackboards("NPC", bb);
			bb->AddProperty("int", false, "Level1Up_Score", "0", "NPC");
			bb->AddProperty("int", false, "Level2Up_Score", "0", "NPC");
			bb->AddProperty("int", false, "Level3Up_Score", "0", "NPC");
			bb->AddProperty("int", false, "Level4Up_Score", "0", "NPC");
			bb->AddProperty("bool", false, "m_canBossRefresh", "false", "NPC");
			bb->AddProperty("int", false, "m_level", "0", "NPC");
			bb->AddProperty("vector<int>", false, "delayTime", "5:20|15|10|5|2", "NPC");

			// ---------------------------------------------------------------------
			// tasks
			// ---------------------------------------------------------------------

			CTagObjectDescriptor* objectDesc = NULL;
			CCustomMethod* customeMethod = NULL;

			return true;
		}

		virtual void RegisterCustomizedTypes_()
		{
			behaviac::TypeRegister::Register<ETest>("ETest");
			behaviac::TypeRegister::Register<StructTest>("StructTest");
		}

		virtual void UnRegisterCustomizedTypes_()
		{
			behaviac::TypeRegister::UnRegister<ETest>("ETest");
			behaviac::TypeRegister::UnRegister<StructTest>("StructTest");
		}
	};

	static CppBehaviorLoaderImplement cppBehaviorLoaderImplement;
}
