/* ATK -  Accessibility Toolkit
 * Copyright 2001 Sun Microsystems Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef SPI_HYPERTEXT_H_
#define SPI_HYPERTEXT_H_

#include <bonobo/bonobo-object.h>
#include <atk/atk.h>
#include <libspi/Accessibility.h>
#include <libspi/text.h>

G_BEGIN_DECLS

#define SPI_HYPERTEXT_TYPE        (spi_hypertext_get_type ())
#define SPI_HYPERTEXT(obj)          (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPI_HYPERTEXT_TYPE, SpiHypertext))
#define SPI_HYPERTEXT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), SPI_HYPERTEXT_TYPE, SpiHypertextClass))
#define IS_SPI_HYPERTEXT(obj)       (G_TYPE_CHECK__INSTANCE_TYPE ((obj), SPI_HYPERTEXT_TYPE))
#define IS_HYPESPI_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPI_HYPERTEXT_TYPE))

typedef struct _Hypertext SpiHypertext;
typedef struct _HypertextClass SpiHypertextClass;

struct _Hypertext {
  SpiText parent;
};

struct _HypertextClass {
  BonoboObjectClass parent_class;
  POA_Accessibility_Hypertext__epv epv;
};

GType         spi_hypertext_get_type      (void);
SpiHypertext *spi_hypertext_interface_new (AtkObject *obj);

G_END_DECLS

#endif /* SPI_HYPERTEXT_H_ */
