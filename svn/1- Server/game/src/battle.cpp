//Search
int iDam = CalcMeleeDamage(pkAttacker, pkVictim);
// Add After
	int iValue;
	int fValue;
//Search
switch (pkWeapon->GetSubType())
		{
			.......
		}
//replace
switch (pkWeapon->GetSubType())
		{
			case WEAPON_SWORD:
#ifdef ANTI_RESISTANTS
				iValue = (int)(pkVictim->GetPoint(POINT_RESIST_SWORD)) - (int)(pkAttacker->GetPoint(POINT_ATTBONUS_SWORD));
				fValue = MAX(0, iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_SWORD)) / 100;
#endif
				// pkAttacker->ChatPacket(CHAT_TYPE_INFO, "My Breaking %d", pkAttacker->GetPoint(POINT_ATTBONUS_SWORD));
				// pkAttacker->ChatPacket(CHAT_TYPE_INFO, "Was %d", pkVictim->GetPoint(POINT_RESIST_SWORD));
				// pkAttacker->ChatPacket(CHAT_TYPE_INFO, "Now %d", iValue);
				// pkAttacker->ChatPacket(CHAT_TYPE_INFO, "fValue %d", fValue);
				// pkAttacker->ChatPacket(CHAT_TYPE_INFO, "Dam %d", iDam);
				break;

			case WEAPON_TWO_HANDED:
#ifdef ANTI_RESISTANTS
				iValue = pkVictim->GetPoint(POINT_RESIST_TWOHAND) - pkAttacker->GetPoint(POINT_ATTBONUS_TWOHAND);
				fValue = MAX(0,iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_TWOHAND)) / 100;
#endif
				break;

			case WEAPON_DAGGER:
#ifdef ANTI_RESISTANTS
				iValue = pkVictim->GetPoint(POINT_RESIST_DAGGER) - pkAttacker->GetPoint(POINT_ATTBONUS_DAGGER);
				fValue = MAX(0,iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_DAGGER)) / 100;
#endif
				break;

			case WEAPON_BELL:
#ifdef ANTI_RESISTANTS
				iValue = pkVictim->GetPoint(POINT_RESIST_BELL) - pkAttacker->GetPoint(POINT_ATTBONUS_BELL);
				fValue = MAX(0,iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_BELL)) / 100;
#endif
				break;

			case WEAPON_FAN:
#ifdef ANTI_RESISTANTS
				iValue = pkVictim->GetPoint(POINT_RESIST_FAN) - pkAttacker->GetPoint(POINT_ATTBONUS_FAN);
				fValue = MAX(0,iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_FAN)) / 100;
#endif
				break;

			case WEAPON_BOW:
#ifdef ANTI_RESISTANTS
				iValue = pkVictim->GetPoint(POINT_RESIST_BOW) - pkAttacker->GetPoint(POINT_ATTBONUS_BOW);
				fValue = MAX(0,iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_BOW)) / 100;
#endif
				break;

			case WEAPON_CLAW:
#ifdef ANTI_RESISTANTS
				iValue = pkVictim->GetPoint(POINT_RESIST_CLAW) - pkAttacker->GetPoint(POINT_ATTBONUS_CLAW);
				fValue = MAX(0,iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkVictim->GetPoint(POINT_RESIST_CLAW)) / 100;
#endif
				break;
		}