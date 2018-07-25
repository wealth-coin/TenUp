WealthSilo Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/tenup-coin/WealthSilo.svg?branch=master)](https://travis-ci.org/tenup-coin/WealthSilo) [![GitHub version](https://badge.fury.io/gh/tenup-coin%2FTenUp.svg)](https://badge.fury.io/gh/tenup-coin%2FTenUp)

WealthSilo is an open source crypto-currency focused on fast private transactions with low transaction fees & environmental footprint.  It utilizes a custom Proof of Stake protocol for securing its network and uses an innovative variable seesaw reward mechanism that dynamically balances 90% of its block reward size between masternodes and staking nodes and 10% dedicated for budget proposals. The goal of WealthSilo is to achieve a decentralized sustainable crypto currency with near instant full-time private transactions, fair governance and community intelligence.
- Anonymized transactions using the [_Zerocoin Protocol_](http://www.tenup.io/ztup).
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftX_.
- Decentralized blockchain voting utilizing Masternode technology to form a DAO. The blockchain will distribute monthly treasury funds based on successful proposals submitted by the community and voted on by the DAO.

More information at [tenup.io](http://www.tenup.io) Visit our ANN thread at [BitcoinTalk](http://www.bitcointalk.org/index.php?topic=1262920)

### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>5,499,275 TUP</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>Infinite</td></tr>
<tr><td>Premine</td><td>5,000,000 TUP*</td></tr>
</table>

### Reward Distribution

<table>
<th colspan=4>PoW Phase</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>5,000,000 TUP</td><td>Initial Premine</td></tr>
<tr><td>2-200</td><td>1000 TUP</td><td>Open Mining</td></tr>
<tr><td>201-1340</td><td>225 TUP</td><td>Till End of PoW</td></tr>
<tr><th colspan=4>PoS Phase</th></tr>
<tr><th>Block Height</th><th colspan=3>Reward Amount</th></tr>
<tr><td>1340-Infinite</td><td colspan=3>Variable based on SeeSaw Reward Mechanism</td></tr>
</table>

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes</th><th>Miner</th><th>Budget</th>
<tr><td>2-200</td><td>20% (200 TUP)</td><td>80% (800 TUP)</td><td>N/A</td></tr>
<tr><td>201-1340</td><td>20% (45 TUP)</td><td>70% (157.5 TUP)</td><td>10% (22.5 TUP)</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Masternodes & Stakers</th><th>Budget</th>
<tr><td>Phase 1</td><td>1341-102399</td><td>50 TUP</td><td>90% (45 TUP)</td><td>10% (5 TUP)</td></tr>
<tr><td>Phase 2</td><td>102400-245599</td><td>45 TUP</td><td>90% (40.5 TUP)</td><td>10% (4.5 TUP)</td></tr>
<tr><td>Phase 3</td><td>245600-288799</td><td>40 TUP</td><td>90% (36 TUP)</td><td>10% (4 TUP)</td></tr>
<tr><td>Phase 4</td><td>288800-331999</td><td>35 TUP</td><td>90% (31.5 TUP)</td><td>10% (3.5 TUP)</td></tr>
<tr><td>Phase 5</td><td>332000-375199</td><td>30 TUP</td><td>90% (27 TUP)</td><td>10% (3 TUP)</td></tr>
<tr><td>Phase 6</td><td>375200-418399</td><td>25 TUP</td><td>90% (22.5 TUP)</td><td>10% (2.5 TUP)</td></tr>
<tr><td>Phase 7</td><td>418400-461599</td><td>20 TUP</td><td>90% (18 TUP)</td><td>10% (2 TUP)</td></tr>
<tr><td>Phase 8</td><td>461600-504799</td><td>15 TUP</td><td>90% (13.5 TUP)</td><td>10% (1.5 TUP)</td></tr>
<tr><td>Phase 9</td><td>504800-547999</td><td>10 TUP</td><td>90% (9 TUP)</td><td>10% (1 TUP)</td></tr>
<tr><td>Phase X</td><td>548000-Infinite</td><td>5 TUP</td><td>90% (4.5 TUP)</td><td>10% (0.5 TUP)</td></tr>
</table>
