/*
 * pragma.h
 *
 *  Created on: Oct 22, 2019
 *      Author: rtrk
 */

#ifndef PRAGMA_H_
#define PRAGMA_H_

#pragma CHECK_MISRA("-27")
/*The value of an expression of integer type shall not be implicitly converted to a different underlying type if it is not a conversion to a wider integer type of the same signedness
 * strlen greske
 */
#pragma CHECK_MISRA("-10.1")
/*The increment (++) and decrement (--) operators should not be mixed with other operators in an expression
 * neophodno mi je jer program puca
 */
#pragma CHECK_MISRA("-12")
#pragma CHECK_MISRA("-17")
/*
 *  A function shall have a single point of exit at the end of the function
 */
#pragma CHECK_MISRA("-14.7")

#endif /* PRAGMA_H_ */
