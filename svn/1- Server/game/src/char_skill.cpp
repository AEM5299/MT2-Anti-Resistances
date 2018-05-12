//search
EDamageType dt = DAMAGE_TYPE_NONE;
// Add before
#ifdef ANTI_RESISTANTS
		int iValue = 0;
		int fValue = 0;
#endif

//Search
case SKILL_ATTR_TYPE_MELEE:
{
	.....
}
break;
//replace with
case SKILL_ATTR_TYPE_MELEE:
				{
					dt = DAMAGE_TYPE_MELEE;

					LPITEM pkWeapon = m_pkChr->GetWear(WEAR_WEAPON);
					if (pkWeapon)
						switch (pkWeapon->GetSubType())
						{
							case WEAPON_SWORD:
#ifdef ANTI_RESISTANTS
								iValue = pkChrVictim->GetPoint(POINT_RESIST_SWORD) - m_pkChr->GetPoint(POINT_ATTBONUS_SWORD);
								fValue = MAX(0,iValue);
								iDam = iDam * (100 - fValue) / 100;
#else
								iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_SWORD)) / 100;
#endif
								break;

							case WEAPON_TWO_HANDED:
#ifdef ANTI_RESISTANTS
								iValue = pkChrVictim->GetPoint(POINT_RESIST_TWOHAND) - m_pkChr->GetPoint(POINT_ATTBONUS_TWOHAND);
								fValue = MAX(0,iValue);
								iDam = iDam * (100 - fValue) / 100;
#else
								iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_TWOHAND)) / 100;
#endif
								break;

							case WEAPON_DAGGER:
#ifdef ANTI_RESISTANTS
								iValue = pkChrVictim->GetPoint(POINT_RESIST_DAGGER) - m_pkChr->GetPoint(POINT_ATTBONUS_DAGGER);
								fValue = MAX(0, iValue);
								iDam = iDam * (100 - fValue) / 100;
#else
								iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_DAGGER)) / 100;
#endif
								break;

							case WEAPON_BELL:
#ifdef ANTI_RESISTANTS
								iValue = pkChrVictim->GetPoint(POINT_RESIST_BELL) - m_pkChr->GetPoint(POINT_ATTBONUS_BELL);
								fValue = MAX(0, iValue);
								iDam = iDam * (100 - fValue) / 100;
#else
								iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_BELL)) / 100;
#endif
								break;

							case WEAPON_FAN:
#ifdef ANTI_RESISTANTS
								iValue = pkChrVictim->GetPoint(POINT_RESIST_FAN) - m_pkChr->GetPoint(POINT_ATTBONUS_FAN);
								fValue = MAX(0, iValue);
								iDam = iDam * (100 - fValue) / 100;
#else
								iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_FAN)) / 100;
#endif
								break;

							case WEAPON_CLAW:
#ifdef ANTI_RESISTANTS
								iValue = pkChrVictim->GetPoint(POINT_RESIST_CLAW) - m_pkChr->GetPoint(POINT_ATTBONUS_CLAW);
								fValue = MAX(0, iValue);
								iDam = iDam * (100 - fValue) / 100;
#else
								iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_CLAW)) / 100;
#endif
								break;
						}

					if (!bIgnoreDefense)
						iDam -= pkChrVictim->GetPoint(POINT_DEF_GRADE);
				}
				break;

//Search
case SKILL_ATTR_TYPE_RANGE:
....
break;

//replace with
			case SKILL_ATTR_TYPE_RANGE:
				dt = DAMAGE_TYPE_RANGE;
#ifdef ANTI_RESISTANTS
				iValue = pkChrVictim->GetPoint(POINT_RESIST_BOW) - m_pkChr->GetPoint(POINT_ATTBONUS_BOW);
				fValue = MAX(0, iValue);
				iDam = iDam * (100 - fValue) / 100;
#else
				iDam = iDam * (100 - pkChrVictim->GetPoint(POINT_RESIST_BOW)) / 100;
#endif
				break;